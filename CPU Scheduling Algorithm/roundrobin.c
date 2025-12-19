#include <stdio.h>
int main()
{
    int n, quantum, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter Time Quantum: ");
    scanf("%d", &quantum);
    int pid[n], bt[n], rt[n], wt[n], tat[n];
    for (i = 0; i < n; i++)
    {
        pid[i] = i + 1;
        printf("Enter Burst Time for P%d: ", pid[i]);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }
    int time = 0, completed = 0;
    while (completed < n)
    {
        for (i = 0; i < n; i++)
        {
            if (rt[i] > 0)
            {
                if (rt[i] > quantum)
                {
                    time += quantum;
                    rt[i] -= quantum;
                }
                else
                {
                    time += rt[i];
                    tat[i] = time;
                    wt[i] = tat[i] - bt[i];
                    rt[i] = 0;
                    completed++;
                }
            }
        }
    }
    printf("\nPID\tBT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    printf("P%d\t%d\t%d\t%d\n", pid[i], bt[i], tat[i], wt[i]);
    return 0;
}

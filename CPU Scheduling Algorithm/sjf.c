#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int pid[n], at[n], bt[n], ct[n], tat[n], wt[n], completed[n];
    for (i = 0; i < n; i++)
    completed[i] = 0;
    for (i = 0; i < n; i++)
    {
        pid[i] = i + 1;
        printf("Enter Arrival Time & Burst Time for P%d: ", pid[i]);
        scanf("%d %d", &at[i], &bt[i]);
    }
    int time = 0, completedCount = 0;
    while (completedCount < n)
    {
        int idx = -1;
        int minBT = 100000;
        for (i = 0; i < n; i++)
        {
            if (!completed[i] && at[i] <= time && bt[i] < minBT)
            {
                minBT = bt[i];
                idx = i;
            }
        }
        if (idx == -1)
        {
            time++;
            continue;
        }
        time += bt[idx];
        ct[idx] = time;
        tat[idx] = ct[idx] - at[idx];
        wt[idx] = tat[idx] - bt[idx];
        completed[idx] = 1;
        completedCount++;
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
        pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    return 0;
}

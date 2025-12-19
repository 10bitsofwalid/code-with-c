#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    int pid[n], at[n], bt[n], ct[n], tat[n], wt[n];
    for (i = 0; i < n; i++)
    {
        pid[i] = i + 1;
        printf("Enter Arrival Time & Burst Time for P%d: ", pid[i]);
        scanf("%d %d", &at[i], &bt[i]);
    }
    int time = 0;
    for (i = 0; i < n; i++)
    {
        if (time < at[i])
        time = at[i];
        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
        pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    return 0;
}
#include <stdio.h>

struct process {
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
};

int main() {
    int n;
    scanf("%d", &n);
    struct process p[n];
    for(int i=0;i<n;i++){
        p[i].pid = i+1;
        scanf("%d %d", &p[i].at, &p[i].bt);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j].at > p[j+1].at){
                struct process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    int time = 0;
    for(int i=0;i<n;i++){
        if(time < p[i].at) time = p[i].at;
        time += p[i].bt;
        p[i].ct = time;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
    }
    printf("PID AT BT CT TAT WT\n");
    for(int i=0;i<n;i++){
        printf("%d %d %d %d %d %d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    return 0;
}
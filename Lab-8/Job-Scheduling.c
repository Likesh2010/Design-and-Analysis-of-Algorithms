#include <stdio.h>
#define N 14
struct Job {
    int id;
    int profit;
    int deadline;
};
void sortJobs(struct Job jobs[]) {
    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            if(jobs[i].profit < jobs[j].profit) {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
}
int main() {
    struct Job jobs[N] = {
        {1,22,3}, {2,19,3}, {3,29,8}, {4,28,6},
        {5,30,7}, {6,21,5}, {7,27,10}, {8,25,4},
        {9,24,6}, {10,26,12}, {11,14,13}, {12,27,2},
        {13,19,14}, {14,11,1}
    };
    sortJobs(jobs);
    int maxDeadline = 14;
    int slot[15];
    for(int i = 0; i <= maxDeadline; i++)
        slot[i] = -1;
    int totalProfit = 0;
    for(int i = 0; i < N; i++) {
        for(int j = jobs[i].deadline; j > 0; j--) {
            if(slot[j] == -1) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }
    printf("Selected Jobs:\n");
    for(int i = 1; i <= maxDeadline; i++) {
        if(slot[i] != -1)
            printf("J%d ", slot[i]);
    }
    printf("\nMaximum Profit = %d\n", totalProfit);
    return 0;
}
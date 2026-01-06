#include <stdio.h>
int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    while(i <= j){
        while(i <= high && a[i] <= pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int low, int high){
    if(low < high){
        int p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}
int main(){
    int a[] = {157,110,147,122,111,149,151,141,123,112,117,133};
    int n = 12;
    quicksort(a, 0, n - 1);
    printf("Sorted array (using quick sort):\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

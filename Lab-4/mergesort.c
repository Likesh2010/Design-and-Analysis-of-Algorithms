#include<stdio.h>
void merge(int a[], int l, int m, int r){
    int i = l, j = m + 1, k = l;
    int b[100];
    while(i <= m && j <= r){
        if (a[i] <= a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while(i <= m){
        b[k] = a[i];
        i++;
        k++;
    }
    while(j <= r){
        b[k] = a[j];
        j++;
        k++;
    }
    for(i = l; i <= r; i++){
        a[i] = b[i];
    }
}
void mergesort(int a[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main(){
    int a[] = {157,110,147,122,111,149,151,141,123,112,117,133};
    int n = 12;
    mergesort(a, 0, n - 1);
    printf("Sorted array (using merge sort):\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

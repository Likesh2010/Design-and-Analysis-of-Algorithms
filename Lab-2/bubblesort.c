#include<stdbool.h>
#include<stdio.h>
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[], int n){
    int i,j;
    bool swapped;
    for(i=0;i<=n-1;i++){
        swapped = false;
     for(j=0;j<=n-1;j++){
      if(arr[j]>arr[j+1]){
           swap(&arr[j], &arr[j + 1]);
           swapped = true;
      }
    }
    if(swapped == false){
      break;
      }
    }
}
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
int main(){
    int arr[]={50,32,56,40,60,79,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("\nCH.SC.U4CSE24152\n");
}

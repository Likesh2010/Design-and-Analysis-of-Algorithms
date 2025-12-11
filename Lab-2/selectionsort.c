#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
      int min_idx = i;
      for(int j =i;j<=n-1;j++){
        if(arr[j] < arr[min_idx]){
            min_idx = j;
        }
      }
      int temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
  }
}
void printArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={64,32,45,68,19,28,71};
    int n = sizeof(arr)/sizeof(arr[0]);   
    printf("Original array: ");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("Sorted array: ");
    printArray(arr,n);
    return 0;
}

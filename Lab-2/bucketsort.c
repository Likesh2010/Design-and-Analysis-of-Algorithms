#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    float data;
    struct Node* next;
}Node;
void insert(Node** bucket, float value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if(*bucket == NULL || (*bucket)->data >= value){
      newNode->next = *bucket;
      *bucket = newNode;
    } 
    else{
      Node* current = *bucket;
      while(current->next && current->next->data < value){
        current = current->next;
      }
      newNode->next = current->next;
      current->next = newNode;
    }
}
void bucketSort(float arr[], int n){
    Node* buckets[n];
    for(int i=0;i<n;i++){
      buckets[i] = NULL;
    }
    for(int i=0;i<n;i++){
        int index = arr[i]*n;
        if(index == n){ 
          index = n - 1;
        }
        insert(&buckets[index], arr[i]);
    }
    int idx = 0;
    for(int i=0;i<n;i++){
      Node* node = buckets[i];
      while(node){
        arr[idx++] = node->data;
        node = node->next;
      }
    }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter floating point numbers between 0 and 1:\n");
    for(int i=0;i<n;i++){
      scanf("%f", &arr[i]);
    }
    bucketSort(arr, n);
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%f ", arr[i]);
    }
    printf("\nCH.SC.U4CSE24152\n:);
    return 0;
}
  

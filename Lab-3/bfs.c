#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int queue[MAX], front = -1, rear = -1;
int visited[MAX];
void enqueue(int v){
    if(rear == MAX-1){
      return;
    }
    if(front == -1){
      front = 0;
    }
    queue[++rear] = v;
}
int dequeue(){
    if(front == -1){
      return -1;
    }
    int v = queue[front++];
    if(front > rear){
      front = rear = -1;
    }
    return v;
}
void BFS(int adj[MAX][MAX],int n,int start){
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }
    enqueue(start);
    visited[start] = 1;
    while(front != -1){
        int node = dequeue();
        printf("%d ", node);
        for(int i = 0; i < n; i++){
           if(adj[node][i] == 1 && !visited[i]){
              enqueue(i);
              visited[i] = 1;
           }
        }
    }
}
int main(){
    int n;
    int adj[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d", &adj[i][j]);
      }
    }
    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);
    printf("BFS Traversal: ");
    BFS(adj, n, start);
    printf("\nCH.SC.U4CSE24152\n");
    return 0;
}


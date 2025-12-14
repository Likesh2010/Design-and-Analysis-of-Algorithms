#include <stdio.h>
#define MAX 100
int visited[MAX];
void DFS(int adj[MAX][MAX],int n,int start){
    printf("%d ", start);
    visited[start] = 1;
    for(int i=0;i<n;i++){
      if(adj[start][i] == 1 && !visited[i]){
        DFS(adj, n, i);
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
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    for(int i=0;i<n;i++){
      visited[i] = 0;
    }
    printf("DFS Traversal: ");
    DFS(adj, n, start);
    printf("\nCH.SC.U4CSE24152\n");
    return 0;
}


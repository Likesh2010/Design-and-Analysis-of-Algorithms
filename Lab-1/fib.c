#include<stdio.h>
int fibonacci(int x){
 while(x>=1){
 if(x!=1){
  return fibonacci(x-1)+fibonacci(x-2);
 }
 else{
  return 1;
 }
 }
}
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=fibonacci(x);
printf("%d",y);
}
//since there is no use of for loop ,So,The space complexity of the program is O(1).

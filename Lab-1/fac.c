#include<stdio.h>
int factorial(int x){
 if(x==1){
  return 1;
 }
 else{
  return x*factorial(x-1);
 }
}
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=factorial(x);
printf("%d",y);
}
//since there is no use of for loop ,So,The space complexity of the program is O(1).

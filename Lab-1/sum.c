#include<stdio.h>
int sum(int x){
 int y=(x*(x+1))/2;
 return y;
}
int main(){
int a,b;
printf("Enter a number:");
scanf("%d",&a);
b=sum(a);
printf("%d",b);
}

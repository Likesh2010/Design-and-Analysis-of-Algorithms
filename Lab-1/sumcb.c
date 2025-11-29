#include<stdio.h>
int sumofcb(int x){
 float y=((x*x)*((x+1)*(x+1)))/4;
 return y;
}
int main(){
int a,b;
printf("Enter a number:");
scanf("%d",&a);
b=sumofcb(a);
printf("%d",b);
}

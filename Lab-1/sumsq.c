#include<stdio.h>
int sumofsq(int x){
 int y=(x*(x+1)*(2*x+1))/6;
 return y;
}
int main(){
int a,b;
printf("Enter a number:");
scanf("%d",&a);
b=sumofsq(a);
printf("%d",b);
}
//since there is no use of for loop ,So,The space complexity of the program is O(1).

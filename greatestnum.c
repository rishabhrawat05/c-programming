#include<stdio.h>
void main(){
int a,b;
printf("Enter value of a");
scanf("%d",&a);
printf("Enter value of b");
scanf("%d",&b);
if(a>b){
printf("a is greater than b and value of a is %d",a);
}
else{
printf("b is greater than a and value of b is %d",b);
}
}
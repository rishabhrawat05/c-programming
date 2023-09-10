#include<stdio.h>
void main(){
int a,b;
int c=0;
a=5;
b=4;
c=a;
a=b;
b=c;
printf("After swap a is %d and b is %d",a,b);
}
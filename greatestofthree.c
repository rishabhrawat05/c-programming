#include<stdio.h>
void main(){
int a,b,c;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("Enter value of c:");
scanf("%d",&c);
if(a>b && a>c){
printf("a is greater than b and c");
}
else if(b>a && b>c){
printf("b is greater than a and c");
}
else{
printf("c is greater than a and b");
}
}
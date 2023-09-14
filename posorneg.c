#include<stdio.h>
void main(){
int n;
printf("Enter value:");
scanf("%d",&n);
if(n>0 || n==0){
printf("Number is positive");
}
else{
printf("Number is negative");
}
}
#include<stdio.h>
int main(){
int p,r,t;
int si=0;
printf("Enter value of Principal:");
scanf("%d",&p);
printf("Enter value of Rate:");
scanf("%d",&r);
printf("Enter value of Time:");
scanf("%d",&t);
si=(p*r*t)/100;
printf("Simple Interest:%d",si);
return 0;
}
#include<stdio.h>
void main(){
int radius;
float circum;
printf("Enter radius of circle:");
scanf("%d",&radius);
circum=2*3.14*radius;
printf("Circumference of circle with radius %d is:%.2f",radius,circum);
}
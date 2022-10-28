// program to which allows user to enter an integer untill he/she enter a value of zero
#include<stdio.h> 
int n;
printf("Enter an integer\n");
scanf("%d", &n);
while(n != 0)
{
    printf("Enter an integer\n");
    scanf("%d",&n);
}
printf(" you are out of the loop");

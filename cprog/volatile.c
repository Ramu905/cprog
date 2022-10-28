//volatile qualifier tells compiler that variable value can change at any time

#include<stdio.h>
int x = 0;
volatile int y = 0;         
int main()
{
y = 0;
 //Here the compiler optimizes the code and 
//'else'part will be optimizes because the the var(x) will never be other than 0

if(x ==0)
{
printf("x is zero\n");
}
else
{
printf("x is not zero\n");
}
//Here the compiler never optimize 'else' part 
//because the variable(y) is a volatile var 

if(y==0)
{
printf("y is zero\n");
}
else
{
printf("y is not zero\n");
}
return 0;
}

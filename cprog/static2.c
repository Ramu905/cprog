#include<stdio.h>
int initializer(void)   //produces error
{
return 50;      //variables can only be inializers in constant literals
}
int main()    
{
static int i = initializera();
printf("the value of i is:%d", i);
getchar();
return 0;
}

// c program to demonstrate the syntax of switch 
#include<stdio.h>
int main()
{
    int a = 4;
    switch (a)
    {
    case 1:
    printf("the choice is 1");      /* constant-expression */
     break;                         // Break is optional
    case 2:
    printf("the choice is 2");
    break;
    case 4:
    printf("the choice is 4");
    break;

    default:
    printf("the choices other than 1, 2 ,& 3");     // default is optional 
        break;
        return 0;

    }
}
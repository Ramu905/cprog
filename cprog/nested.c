#include<stdio.h>
int main()
{
    int i = 10;
    if(i == 10)
    {
        if(i < 15)
        printf("the tv is working\n ");      // if statement 
        if(i >=10)                            //nested if statement condition 
        printf("that is right\n");           // will only execute when above if statement is true
        else 
        printf("the value is wrong");
        return 0;
    

    }
}
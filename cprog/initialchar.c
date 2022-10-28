#include<stdio.h>
int main()
{
    char x[5]={65,66,67,68,69};  // declaration and initialization of character
    char i;
    for(i=0; i<5; i++)
    {
        printf("%c", x[i]);   // This will print the alphabets of given codes 
    }
    return 0;
}
/*getchar() function is used to read one character at a time from user input*/
/*It returns an integer eqivalent to the ASCII code of the character*/
#include<stdio.h>
int input(char str[], int n)
{
    int ch, i=0;                    /*here we can write either char , int */
    while((ch=getchar()) != '\n')  // Here getchar() returns the integer value 
    if(i < n)         // If above condition is true then it will print if condition 
    str[i++] = ch;
    str[i] = '\0';   //if it is false then this condition is print
    return i;}
        int main()
        {
        char str[100];
        int n= input(str, 5);     // here input function is calling 
        printf("%d %s", n, str); 
        return 0;
    }


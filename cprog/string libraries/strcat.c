/* strcat(): This will combines both strings*/
/* The length of destination will > source string*/
// syntax: strcat(destination string, source string);
#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] ="hello";
    char B[20] = "vijayram";
    strcat( A, B); // this will combines both strings
    printf("%s", A);
    getchar();
}
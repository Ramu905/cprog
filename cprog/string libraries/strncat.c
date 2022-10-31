/* strncat(): This is used to combining or concatening n characters of one string into another */
/* The resultant out put is destination string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char A[50] = "Hello";
    char B[30] = "ramu";
    strncat (A, B, 4); // This will combine 4 characters of string B;
    printf("%s", A);
    getchar();

}
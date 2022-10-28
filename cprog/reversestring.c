// Reversing a string //
#include<stdio.h>
int main()
{
    char A[] = "python";
    char b[7];
    int i, j;
    for(i=0; A[i]!='\0'; i++)
    {

    }
    i=i-1;
    for(j=0; i>=0; i--,j++)
    {
    b[j] = A[i];
    }
    b[j]='\0';
    printf("%s",b);
    
}
/*gets() and scanf() heve no limit to take the input characters to read */
/* Although scanf() has way to set the limit for no.of characters i.e is %ns */
#include<stdio.h>
int main()
{
    char A[10];
    printf("Enter the name of string");
    //scanf("%s", A);
    //printf("%s", A);
    gets(A);
    printf("%s",A);
    return 0;
}
/* string copy function will copy the source string into destinaton string*/
/* The length of the destination string will >= source string*/
// syntax: strcpy(destination string , source string)
#include<stdio.h>
#include<string.h>
int main()
{
    char A[20], B[10];
    printf("Enter the source string ");
    scanf("%s", A);
    printf("Enter the destination string");
    scanf("%s",B);
    strcpy(B, A);
    printf("The copied string is =%s", B);
    getchar();

}
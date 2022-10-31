/* strncpy : This will copy's  'n' characters of source into destination*/
/* length of destination is >= to source string*/
// syntax: strncpy(destination string, source string, n);
#include<stdio.h>
#include<string.h>
int main()
{
    char A[30], B[30];
    printf("Enter the  string");
    scanf("%s", A);
      printf("Enter the  string");
    scanf("%s", B);
    B[3] = '\0';    // copy 3 charaters from a string
    strncpy(B, A, 3);
    printf("%s", B);
    getchar();
}
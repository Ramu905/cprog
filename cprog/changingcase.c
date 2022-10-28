// Changing the case of string from upper to lower case 
#include<stdio.h>
int main()
{
    char A[] = "welcome";
    int i;
    for(i=0; A[i]!='\0'; i++)
    {
        A[i] = A[i]-32;  // The diff b/w upper case and lower case is 32 
    }                     // if we add 32 to string then it would be lower if we sub it would be upper case
    printf("%s", A);

}
// Comparing a string using each letter in both strings if letters are not match then it will stop the process//
//If the ASCII value of a character of the first string is less than the ASCII value of a character of the second string, then the function will return negative value.//
//If the ASCII value of a character of the first string is greater than the ASCII value of a character of the second string, then the function will return positive value.//
#include<stdio.h>
int main()
{
    char A[6] = "pramu";
    char B[7] = "pramud";
    int i, j;
    for(i=0,j=0; A[i]="\0",B[j]="\0"; i++, j++);
    {
        if(A[i] != B[j])
        break;

    {
    if(A[i] == B[j])
    printf("Both are equal");
    else
    printf("smaller");
    }

}
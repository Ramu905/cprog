#include<stdio.h>
#include<stdlib.h>
int ValidateString(char *B)
{
    int i;
    if (!(B[i] >= 65 && B[i] <= 90) && !(B[i] >= 97 && B[i] <= 122) && !(B[i] >= 48 && B[i] <= 57))
    {
        return 0;
    }
    return 1;
}
int main()
{
    char *B = "ramu9983";
    printf("This is a string:%s\n", B);
    if (ValidateString(B))
    {
        printf("This is valid input");
    }
    else
    {
        printf("This is invalid input");
    }
    return 0;
}
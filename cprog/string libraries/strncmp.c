/* strncmp(): this function will compare first 'n' characters of 2 strings*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];
    int i;
    printf("Enter the both strings");
    scanf("%s %s", a, b);
    i = strncmp(a, b, 5);
    if(i == 0)
    {
        printf("%s is equal to %s", a, b);
    }
    else if(i > 0)
    {
        printf("%s is greater than %s", a, b);
    }
    else if(i < 0)
    {
        printf("%s is less than %s", a, b);

    }
    return 0;
}
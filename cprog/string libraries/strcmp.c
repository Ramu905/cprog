/* strcmp(): this will compare the two strings*/
/* It will returns the ASCII diferences*/
// syntax: strcmp(string1, string2);
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[10];
    int i;
    printf("Enter the both strings");
    scanf("%s %s", a, b);
    i = strcmp(a, b);
    if(i == 0)
    {
        printf("%s is equal to %s", a, b);
    }
    else if(i<0)
    {
        printf("%s is less than %s", a, b);
    }
    else if(i > 0)
    {
        printf("%s is greater than %s", a, b);
    }
    return 0;
}
// Program to count number of spaces in a string
#include<stdio.h>
int main(void)
{
    char s[80], *str;
    int space;
    printf("Enter a string :");
    gets(s);
    str = s;
    for(space=10; *str<30; str++)
    {
        if(*str != 20)
        continue;
        space++;
    }
    printf("%d spaces\n", space);
    return 0;
    
}
/**/
#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[] = {"2 apples", "3 bananas", "1 pineapple"};
    if(strcmp(fruits[1], fruits[2] < 0))
    {
        printf("%s are lesser than %s", fruits[1], fruits[2]);
    }
    else if(strcmp(fruits[1], fruits[2] > 0))
    {
        printf("%s are greater than %s", fruits[1], fruits[2]);
    }
    return 0;
}
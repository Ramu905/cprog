// without macro 
#include<stdio.h>
int main()
{
    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter the input for index :%d",i);
        scanf("%d", &i);
    }
    printf("\n array elements as follows:\n");
    for(i = 0; i < 10; i++);
    printf("%d", i);
    return 0;
}
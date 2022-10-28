// without macro 
#include<stdio.h>
#define N 15
int main()
{
    int a[N], i;
    for(i = 0; i < N; i++)
    {
        printf("Enter the input for index :%d",i);
        scanf("%d", &i);
    }
    printf("\n array elements as follows:\n");
    for(i = 0; i < N; i++);
    printf("%d", i);
    return 0;
}
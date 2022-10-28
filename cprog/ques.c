// The alternative ? rator program (if-else)
// conditional rator 
#include<stdio.h>
int main(void)
{
    int isqrd, i;       // square the integer value entered by user
    printf("Enter a number:");
    scanf("%d", &i);
    isqrd = i>0 ? i*i : -(i*i);            // using the ? rator
    printf("%d square is %d", i, isqrd);
    return 0;

}
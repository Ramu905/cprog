#include<stdio.h>
int main(void)
{
    int t;
    for(t = 0; t < 100; t++)
    {
    printf("%d", t);
    if(t==10)        // After reaching t equal to 10 then it breaks the loop
    break;           // overriding the coditional test t<100 autometically terminates loop

}
return 0;
}
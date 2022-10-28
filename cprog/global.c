#include<stdio.h>
int x = 20;
void fun1()
{
    printf("%d\n",x);
}
void fun2()
{
    printf("%d\n",x);
}
int main()
{
    fun1();
    fun2();
    return 0;
}

// Unary arthmetic operator
#include<stdio.h>
int main()
{
    int a = 10, b = 4, res;
// post-increment example:
// res is assigned 10 only , a is not updated
res = a++;
printf(" a is %d and res is %d\n", a,res);
// post-decrement example:
// res is assigned 11 only , a is not updated
res = a--;
printf("a is %d and res is %d\n", a, res);
// pre-increment example
// res is assign 11 now ,a is updated here itself
res = ++a;
printf("a is %d and res is %d\n", a, res);          // a and res have same values 11
// pre-decrement example
// res is assigned 10 now and a is updated here 
res = --a;
printf("a is %d and res is %d\n", a, res);          // a and res have same value by 10
return 0;
}
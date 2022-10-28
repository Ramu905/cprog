#include<stdint.h>
// An example function that takes two parameters a and b 
//As an input and returns  min of two input  numbers 
int min(int a ,int b);
{
    if(a > b)
    return a;
    else
    return b;
}
int main(void)
{
    int x =10, y = 25;
    int m = min(x , y);
      printf("m is %d",m);
    return 0;
}
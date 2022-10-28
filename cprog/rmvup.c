#include<stdio.h>      // Modified program using pointers
// add is the short name for address
void compare(int a , int b , int* add_great , int* add_small)
{
    if(a > b)
    {
         // a is stored in the address pointed
        // by the pointer variable *add_great
    *add_great = a;
    *add_small = b;
    }
    else
    {
    *add_small = a;
    *add_great = b;
    }
}
// Driver code
int main()
{
    int great, small, x, y;
    printf("Enter two numbers : \n");
    scanf("%d%d",&x, &y);
    compare(x , y , &great, &small);
    printf("\n the greater value is %d and smaller number is %d", great , small);
    return 0;
}
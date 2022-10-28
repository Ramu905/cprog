#include<stdio.h>
int main()
{                           // pointer to h[1] = *(pointer to h[1]) ==> (1000+1) ==> 1001 ='e'( 1000 is adrs of h)
    char *ptr = "hello ";  // Here address of 'h' is stored in pointer
    printf("%s", "hello ");  // To the printf/scanf we are passing the pointer to the first element to the string literal character 
    return 0;
}
/* %.ns is used to print a part of string where n is the no.of characters are to be displayed on screen*/
#include<stdio.h>
int main()
{
   char *A = "hello world";
    //printf("%.3s", A); 
    /* %m.ns here m denotes the size of the field within which the string will be displayed */
    //printf("%6.4s", A);
/*puts() is a function is a function which is declared in <stdio.h> library and is used to write sting output*/
// it autometically write the new line character//
puts(A);
}
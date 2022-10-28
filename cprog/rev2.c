#include<stdio.h>
int main()
{
    char A[]="python";
    char t;
    int i, j;
   for(i=0; A[i]!='\0'; i++)
   {
    i= i-1;
   }
   for(j=0; j<i; j++, i--)
   {
    A[j] = t;
    A[i] = A[j];
    A[i] =t;
   } 
   printf("%s",A);
}
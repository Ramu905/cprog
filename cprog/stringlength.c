#include<stdio.h>
int main()
{
   /* char s[]="welcome";
   int i;
   for(i=0; s[i] != '\0'; i++)
   {

   }
   printf("the length of string is %d");
   return 0;
   } */
   /* USING STRING.H LIBRARY FUNCTION*/
   /*char s[1000];
   printf("Enter the name of string:");
   scanf("%s",s);
   int length;
   length =strlen(s);
   printf("the length of string is %d", length);
   return 0;*/
   char s[] ="c_programming";
   int i;
   i = sizeof s;           // Using the sizeof operator 
   printf("The length of string is %d", i);
   return 0;
}
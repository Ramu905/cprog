/*introduction to string library and string copy*/
/*For copy strings, concatenate strings, selecting substrings so on*/
/* so for that library called #include<string.h>*/
// strcpy function//
// Prototype: char* strcpy(char* destination, const char* source) 
/* Here const is used because source is not modified we simply copy the files of source of destination*/
/* Here strcoy() is used to copy a string pointed by source(including NULL character) to the destination*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15]="This_is_ram";
    char str2[10];
    //char str3[10];
   /* printf("%s\n",strcpy(str2, str1));  // Here str1 copied into str2 */
    //strcpy(str3, strcpy(str2, str1);  // if the length of str1 is not equal then it will undefined
    /*To see the size of str2 then : strncpy(destination, source sizeof(destination));*/
    strncpy(str2, str1,sizeof(str2));
    printf("%s",  str2);  
    return 0;
}
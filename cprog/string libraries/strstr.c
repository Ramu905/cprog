/* strstr(): This function is used to search a substring is present in mainstring*/
/* It will return pointer to first occurence of s2 in s1*/
// syntax: strstr(substring, mainstring);
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];
    char *found;
    printf("Enter a string:\t");
    gets(a);                     // This will take the user input 
    printf("Enter string to be searched for:\t");
    gets(b);
    found = strstr(a, b);   // this fun search the sub string from main string
    if(found)
        printf("%s is foound in %s in %ld position", b, a, found-a);
    else 
        printf(" since the string is not found");
        getchar();
}
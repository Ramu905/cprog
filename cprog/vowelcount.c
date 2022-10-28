// counting the vowels  and consonents of string 
#include<stdio.h>
int main()
{
    char A[]="how are you ";
    int i, vcount, ccount=0;
    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i]=='a'|| A[i]=='e'|| A[i]=='i' || A[i]=='o' || A[i]=='u'||
        A[i]=='A'|| A[i]=='E'|| A[i]=='I'|| A[i]=='O' || A[i]=='U')   //This will print the vowel of strings 
        {                                                           // Either capital or small cases
            printf("%c", A[i]);
            vcount++;
        }
    }
         elseif(A[i] >= 65 && A[i]<= 90 || A[i] >= 97 && A[i] <= 122)
         {
            ccount++;
         }
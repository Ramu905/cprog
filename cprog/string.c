// STRINGS: (string literals or string constant) is a sequence of characters enclosed with double quotes.
// Ex: " Hello world "(string literals)
// strings we give some numeric code for characters (ASCII) values. for all the languages like chines, japanies we use unicodes.
// ASCII codes  are subset of union code.
#include<stdio.h>
int main()
{
    printf("%s", "Hello world");   // %s is a placeholder of string 
   printf("%s\n", "you have to dream before your dream can come. \
   --A.P.j abdul kalam");    // Back space will print characters next line  with space this is called slicing (disadv)
   printf("%s\n", "you have to dream before your dream can come."
    "--A.P.j abdul kalam"); // double quotes will print the next line 
    return 0;
}


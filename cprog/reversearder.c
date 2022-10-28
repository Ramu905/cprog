// Printing the array values in reverse order using for loop 
#include<stdio.h>
int main()
{
    int a[] = {34, 56, 67, 98, 100, 54, 85, 74};
    int i;
    for(i = 0; i < 7; i++)  // This prints the original order of array elements
    {
    printf("%d\n",a[i]);
}
printf("\n");
for(i = 7; i >= 0; i--)
{
printf("%d\n",a[i]);
}
return 0;
}
// One dimensional or multidimensional arrays can be made constant by using keyword constant
#include<stdio.h>
int main()
{
    const int a[10] ={ 1,2,3,4,5,6,4,3,2,9};
a[2] = 45;
return 0;
}
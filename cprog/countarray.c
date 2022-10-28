// Counting array elements using sizeof() operator
// sizeof(name_of_array)/sizeof(name_of_array[0])
// size of 1 array element x num of elements = size of whole array
#include<stdio.h>
int main()
{
    int a[]={21,3,4,5,87,596,93,76,84765,12,34,45,23,445,756,987,957,98,876,857,884,8,79,5,99,8,9,98,9};
    printf("%d",sizeof(a) / sizeof(a[0]));
}
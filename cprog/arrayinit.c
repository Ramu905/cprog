#include<stdio.h>
int main()
{
    // if length of an array is less than length is specified i.e  arr[10]= {1,2,3,4,5}
    //then remaining locations  are filled with zeroes//
    int arr[6],i;
    arr[0]=10;
    arr[1]=14;
    arr[2]=36;
    arr[3]=54;
    arr[4]=23;
    arr[5]=34;
    for(i=0; i<4; i++)
    {
    printf("%d\n", arr[i]);
}
}
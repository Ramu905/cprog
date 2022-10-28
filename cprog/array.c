// Syntax:
//   ------ data_type name of the array[no.of elements];  -------//

//data types like (int, float, double ,char)
//ex: int arr[10];
// The memory allocated by array is cal  by = 10*sizeof(int)  int = 4bytes//
// The length of an array can be specified by any integer constant value or any expressions but it not like 5.656 //
// int a[5], int arr[5+5], int a[21/4]  length of an array canot be a  negative//
#include<stdio.h>
int main()
{
    int a[5],i;      // here array is initialized separately with 
    a[0]=23;
    a[1]=36;
    a[2]=87;
    a[3]=65;
    a[4]=87;
    for(i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
    a[i] = a[0]+a[4];
    printf("%d",a[i]);
}

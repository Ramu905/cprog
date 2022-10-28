// Initialization of three dimensional array: int a[2][3][3];
// Here we can use two 2D arrays and to access the elements in 1st row and 3rd coloumn in 1st 2D array
// by using a[0][0][2]
#include<stdio.h>
int main()
{
    int a[2][3][3] = { 
        {{1,2,3},{4,5,6},{1,2,3}},
        {{7,8,9},{10,11,12},{7,8,9}}
    };
    int i, j, k;     // Here i represents 1st 2D array and 2nd 2D arrays , j is used to print elements of row
        for(i=0; i<2; i++)                // k is used to print the elements of coloumn
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            { 
                printf("%d", a[i][j][k]);
            }
        }
    }
}
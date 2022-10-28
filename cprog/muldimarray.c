// Multidimensional arrays are defined as an array of arrays 
// -----SYNTAX------
//  data_type Name_of_array[size1][size2]....[sizeN];     // declaring N-dimensional array
// Ex: int a[3][4]; 
// Sizeof multidimensional arrays can be calculated by  multiplying size of all dimensionals array
// Ex: size of a[10][20] = 10 x 20  = 200 x 4(size of one element) = 800 bytes 
// 2D array can be printed by using ---Nested for loop----
#include<stdio.h>
int main()
{
    int a[2][3] = {1, 2, 4, 5, 8, 9};
    int i,j;
    for(i=0; i<2; i++)    // In 1D array we use only one for loop
    {
        for(j=0; j<3; j++)  // This is Nested for loop
        {
            printf("%d", a[i][j]);
        }
    }
}
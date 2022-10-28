// Writing a program of 5x5 array and do the row sum and coloumn sum
#include<stdio.h>
int main()
{
    int a[5][5] = {
        8, 3, 9,0,10,3,5,17,1,1,2,8,6,23,1,15,7,3,2,9,6,14,2,6,0
    };
    int i, j;
    int sum = 0;
    printf("\n, row total: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            sum += a[i][j];    // sum += sum + a[i][j]  ==> sum = 0+8 =8 it repeats 
          }                    // Here += first it adds the value of variable left to the value on right and//
          // then assign the value to the var on left
        printf("%d", sum);
        sum = 0;
    }
    printf("\n, coloumn total:");
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            sum += a[i][j];
        }
        printf("%d", sum);
        sum = 0;
    }
}
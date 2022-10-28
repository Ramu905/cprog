#include<stdio.h>
#define MAX 50   // this will indicates the maximum length of matrix
int main()
{
    int a[MAX][MAX], b[MAX][MAX],product[MAX][MAX];  // Here it is 3 x 3 matrix [multidimensional array]
    int i, j, k;
    int arows, acolumns, brows, bcolumns;      // matrix a and matrix b
    int sum = 0;
    printf("Enter the rows and columns of matrix a: ");  // Here we have to enter the no.of rows and columns (i.e 3x3,2x2,4x4....)
    scanf("%d %d", &arows,&acolumns);     // inputs of matrix a is given by user
    printf("Enter the elements of matrix a:\n"); 
    for(i=0; i<arows; i++)
    {
        for(j=0; j<acolumns; j++)   
        {
            scanf("%d", &a[i][j]);   
        }
    }
    printf("Enter the rows and columns of matrix b:");
    scanf("%d %d", &brows, &bcolumns);  // Here we can give rows and columns of matrix i.e 3 x 3
    if(brows != acolumns)    // If rows and coloumns of both matrices are not equal then it will not multiply the matrices 
    {
        printf("sorry! we can not multiply the matrices a and b: ");
    }
    else
    printf("Enter the elements of matrix b:\n");
    for(i=0; i<brows; i++)
    {
        for(j=0; j<bcolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<arows; i++)
    {
        for(j=0; j<bcolumns; j++)  
        {
            for(k=0; k<brows; k++)
            {
                sum += a[i][k]*b[k][j];  // condition to multiply the both matrices i indicates the rows and j indicates the columns of matrix
            }                            // k selects the seperate element
            product[i][j] = sum;
            sum=0;
        }
    }
    printf("Resultant matrix :\n");
    for(i=0; i<arows; i++)          
    {
        for(j=0; j<acolumns; j++)
        {
            printf("%d", product[i][j]);  // It will print the resultant of matrix 
        }
        printf("\n");
    }
    return 0;
}

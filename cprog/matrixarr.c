#include<stdio.h>
int main()
{
    int a[3][3],b[3][3], i, j, k;
    int arows, acolumns, brows, bcolumns;
    printf("Enter the elements of matrix a");
    for(i=0; i<=arows;i++)
    {
        for(j=0; i<=acolumns; j++)
        {
            scanf("%d",ram[i][j]);
        }
    }
    if(arows != bcolumns)
    {
        printf("sorry we can't multiply the matrix");
    }
    else
    printf("Enter the elements of matrix b");
    for(i=0; i<=brows; i++)
    {
        for(j=0; j<=0; j++){
            scanf("%d", vijay[i][j]);
        }
    }
    k = a[i][j]*b[i][j];
    printf("ente the resultant matrix");
    for(i=0; i<=arows; i++);
    {
        for(j=0; j<=bcolumns; j++);{
            printf("%d", k[i][j]);
        }
        printf("\"n");

    }
    return 0;
}
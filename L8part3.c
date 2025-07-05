#include <stdio.h>
int main()
{

    /*problem 14. WAP to multiply the given first matrix with the second matrix then print the answer.
                                1   2      and      5   6
                                3   4               7   8                         */
    // solution:
    int a[2][2] = {1, 2, 3, 4}, b[2][2] = {5, 6, 7, 8};
    int res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    /* problem 15. write a general program to multiply two matrices taking all inputs from user and print the
        resultant matrix.*/
    // solution:
    int m, n, p, q;
    printf("enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }
    printf("enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p)
        printf("\nThe matrices can not be multiplied.");
    else
    {
        int B[p][q];
        printf("enter the elements of second matrix:\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
                scanf("%d", &B[i][j]);
        }
        int RES[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                RES[i][j] = 0;
                for (int k = 0; k < n; k++)
                    RES[i][j] += A[i][k] * B[k][j];
            }
        }
        printf("the resultant matrix is:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", RES[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
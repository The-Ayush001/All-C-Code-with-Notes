#include <stdio.h>
#include <limits.h>

int main()
{
    /*problem 8. given a matrix 'a' of dimensions m by n and 2 coordinates (ri1,ci1) and (ri2,ci2).
        return the sum of the rectangle from (ri1,ci1) to (ri2,ci2), where ri is row index and ci is column index.
        for ex, below are the coordinates/indices of a rectanglular matrix, mapped like a matrix themselves.
                      (0,0)  (0,1)  (0,2)  (0,3)
                      (1,0)  (1,1)  (1,2)  (1,3)
                      (2,0)  (2,1)  (2,2)  (2,3)
                      (3,0)  (3,1)  (3,2)  (3,3)
                      (4,0)  (4,1)  (4,2)  (4,3)
        if (ri1,ci1)=(2,0) and (ri2,ci2)=(4,2) then we have to find the sum of elements of rectangle formed
        between the given indices.
                      (2,0)  (2,1)  (2,2)
                      (3,0)  (3,1)  (3,2)
                      (4,0)  (4,1)  (4,2)                                                                */
    // solution:
    int m = 4, n = 4, sum = 0;
    int ri1 = 2, ci1 = 0, ri2 = 4, ci2 = 2; // same indices as shown in above ex.
    int a[5][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("the given matrix is-\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
    printf("\nthe sum of all the elements forming the rect between indices (2,0) and (4,2) is - ");
    for (int i = 2; i <= 4; i++)
    {
        for (int j = 0; j <= 2; j++)
            sum = sum + a[i][j];
    }
    printf("%d\n\n", sum);

    /*problem 9. WAP to print the row number having the maximum sum in the given matrix. also print the
        maximum sum.
                            1   2   3   1
                            0   5   0   2
                            9   0   0   3                                */
    // solution:
    int arr[3][4] = {1, 2, 3, 1, 0, 5, 0, 2, 9, 0, 0, 3}, maxsum = arr[0][0];
    int sum1, count = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (int j = 0; j < 4; j++)
        {
            sum1 = sum1 + arr[i][j];
        }
        if (maxsum < sum1)
            maxsum = sum1;
    }
    for (int i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (int j = 0; j < 4; j++)
        {
            sum1 = sum1 + arr[i][j];
        }
        if (maxsum == sum1)
            count = i;
    }

    printf("%d is the maximum sum of a row, number of that row is %d and its row index is %d.\n", maxsum, count + 1, count);

    /*problem 10. given a matrix having 1's and 0's only, find the row with the maximum number of 1's
                            1   0   1   1
                            0   1   0   1
                            1   0   0   1                                */
    // solution:
    int ar[3][4] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};
    int count1, maxcount = 0, indr;
    for (int i = 0; i < 3; i++)
    {
        count1 = 0;
        for (int j = 0; j < 4; j++)
        {
            if (ar[i][j] == 1)
                count1++;
        }
        if (maxcount < count1)
        {
            maxcount = count1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        count1 = 0;
        for (int j = 0; j < 4; j++)
        {
            if (ar[i][j] == 1)
                count1++;
        }
        if (maxcount == count1)
        {
            indr = i;
        }
    }
    printf("\nrow index of the row with maximum number of 1's is %d and numbers of 1's in it is %d.\n", indr, maxcount);

    /*problem 11. WAP to print the transpose of the given matrix.
                            1   2   3   7
                            4   3   9   8
                            3   8   1   0                          */
    // solution:
    // Naive method-
    int b[3][4] = {1, 2, 3, 7, 4, 3, 9, 8, 3, 8, 1, 0};
    int btrans[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < 4 && j < 3)
                btrans[i][j] = b[j][i];
            else
                continue;
        }
    }
    printf("\n\nThe Transpose of the given matrix is -\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", btrans[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // far better way of solving the above problem-
    int b2[3][4] = {1, 2, 3, 7, 4, 3, 9, 8, 3, 8, 1, 0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", b2[j][i]);
        printf("\n");
    }

    /*problem 12. WAP to change the given n x n matrix into its transpose without using a second array.
        also print the matrix after transposing.
                            1   2   3
                            4   5   6
                            7   8   9                         */
    // solution:
    int a12[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = a12[i][j];
            a12[i][j] = a12[j][i];
            a12[j][i] = temp;
        }
    }
    printf("\n\nthe transpose of the given matrix is -\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a12[i][j]);
        }
        printf("\n");
    }

    /*problem 13. WAP to rotate the given matrix by 90 degrees clockwise and then print the new matrix.
                            1   2   3   4
                            5   6   7   8
                            9   0   1   2                 */
    // solution:
    int c[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2}; // for this problem we first find the transpose of the
    printf("\n\nthe given matrix is - \n");             // matrix and then reverse the elements in each row.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    int c2[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
            c2[i][j] = c[j][i]; // this will find transpose of matrix.
    }
    printf("the transpose of the given matrix is - \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        int j = 0, k = 2;
        while (j < k)
        {
            int temp2 = c2[i][j]; // this will reverse the elements of all the rows of the matrix.
            c2[i][j] = c2[i][k];
            c2[i][k] = temp2;
            j++;
            k--;
        }
    }
    printf("the matrix after being rotated 90 degrees is - \n");
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d ", c2[i][k]);
        }
        printf("\n");
    }



    return 0;
}
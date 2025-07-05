#include <stdio.h>
#include <limits.h>
/*2-D arrays are used to represent tables or matrices.
syntax-
    data-type array-name [r] [c]        ,where r is number of rows and c is number of columns in the array.

declaration-
    int arr[2][3];  or   int arr[][3];   are valid declarations.
    int arr[][];  or   int arr[2][];     are invalid declarations.
 while intialising a 2-D array it is necessary to mention the second dimension (i.e. column), whereas the first
 dimension(i.e. row) is optional.
 sidenote- when i leave the row index empty when declaring it shows error, this means that we can leave the
 row index empty only when we are also initialising the array at the time of its declaration.

similar to the 1-D array we can access each element of the array by using its row index and column index together.
the index of rows and columns start with 0. so all the elements of the first row will have their row index equal
to zero and all the elements of the second row will have their row index equal to one and so on...
similarly, all the elements of the first column will have their column index equal
to zero and all the elements of the second column will have their column index equal to one and so on...
 in the matrix-    1   2
                   3   4
    1 has its index equal to [0][0],2 has its index equal to [0][1], 3 has its index equal to [1][0],and
    4 has its index equal to [1][1].

initialization-
    int arr[2][3]={1,2,3,4,5,6};  or  int arr[2][3]={{1,2,3},{4,5,6}}
    or int arr[][3]={1,2,3,4,5,6};  or  int arr[][3]={{1,2,3},{4,5,6}}  are valid initialization for the matrix-
                    1  2  3
                    4  5  6
*/
int main()
{

    int arr[2][3] = {1, 2, 3, 4, 5, 6}; // printing a 2-D array.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d  ", arr[i][j]);
        printf("\n");
    }

    int row, column; // taking size of array and its elements as inputs and then printing the array.
    printf("enter the number of rows and columns in the matrix- ");
    scanf("%d  %d", &row, &column);
    printf("\nenter the elements of the matrix- \n");
    int arr1[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            scanf("%d", &arr1[i][j]);
    }
    printf("\nthe matrix / array is- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d  ", arr1[i][j]);
        printf("\n");
    }

    /*problem 1. WAP to print roll numbers and marks obtained by 4 students side by side in a matrix.
                given, roll-46 marks-87, roll-28 marks-56, roll-23 marks-94, roll-10 marks-29. */
    // solution:
    int arr2[][2] = {10, 29, 11, 94, 12, 56, 13, 87};
    printf("\nthe required matrix is- \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d  ", arr2[i][j]);
        printf("\n");
    }

    printf("\n\n");
    /*problem 2. WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns. */
    // solution:
    int arr3[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            arr3[i][j] = 10;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d  ", arr3[i][j]);
        printf("\n");
    }

    printf("\n\n");
    /*problem 3. WAP to add these two matrices-   1 2   and   5 6
                                                  3 4         7 8                         */
    // solution:
    int arr4[2][2] = {1, 2, 3, 4}, arr5[2][2] = {5, 6, 7, 8};
    int sumarr45[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            sumarr45[i][j] = arr4[i][j] + arr5[i][j];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d  ", sumarr45[i][j]);
        printf("\n");
    }

    printf("\n\n");
    /*problem 4. WAP to add these two matrices-   1 2   and   5 6   WITHOUT using any extra array.
                                                  3 4         7 8                                     */
    // solution:
    int arr41[2][2] = {1, 2, 3, 4}, arr51[2][2] = {5, 6, 7, 8};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            arr41[i][j] = arr41[i][j] + arr51[i][j];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d  ", arr41[i][j]);
        printf("\n");
    }
    printf("\n\n");
    /*problem 5. WAP to find the sum of all the elements of a matrix of m by n order. take m,n and elements of the matrix
        as inputs.  */
    // solution:
    int m, n, sum = 0;
    printf("enter the number of rows and columns of the matrix- ");
    scanf("%d %d", &m, &n);
    int brr[m][n];
    printf("enter the elements of the matrix- ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &brr[i][j]);
            sum = sum + brr[i][j];
        }
    }
    printf("%d", sum);

    /*problem 6. WAP to find the minimum and the maximum value of the elements in the given matrix/array.
        ar[3][3]={-1,-21,21,23,-3,-21,23,-20,9}*/
    // solution:
    int ar[3][3] = {-1, -21, 21, 23, -3, -21, 23, -20, 9};
    int max = INT_MIN, min = INT_MAX;
    printf("\nthe given matrix is-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d  ", ar[i][j]);
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < ar[i][j])
                max = ar[i][j];
            if (min > ar[i][j])
                min = ar[i][j];
        }
    }
    printf("the smallest element in given matrix is %d.\n", min);
    printf("the largest element in given matrix is %d.\n\n", max);

    /*problem 7. WAP to find maximum value of the elements in the given matrix/array.also print its index.
        ar[3][3]={-1,-21,21,23,-3,-21,23,-20,9}*/
    // solution:
    int ar1[3][3] = {-1, -21, 21, 23, -3, -21, 23, -20, 9};
    int max1 = INT_MIN;
    printf("\nthe given matrix is-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d  ", ar1[i][j]);
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            if (max1 < ar1[i][j])
            {
                max1 = ar1[i][j];
            }
    }
    printf("\nthe maximum value is %d and its index is/are - ", max1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max1 == ar1[i][j])
                printf(" [%d][%d]  ", i, j);
        }
    }

    return 0;
}
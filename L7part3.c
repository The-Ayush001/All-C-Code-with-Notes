#include <stdio.h>
#include <limits.h>
int main()
{

    /* Problem 11.- Given an array of integers, WAP to find the second largest element in the array.
                            arr[8]= {1,2,3,8,8,5,6,7}   */
    // Solution-

    // Method 1:
    int arr[8] = {1, 2, 3, 8, 8, 5, 6, 7};
    int max = INT_MIN;
    int scndmax = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int j = 0; j < 8; j++)
    {
        if (scndmax < arr[j] && arr[j] != max)
            scndmax = arr[j];
    }
    printf("%d\n", scndmax);

    // Method 2:
    int arr2[8] = {1, 2, 3, 8, 8, 5, 6, 7};
    int max2 = INT_MIN;
    int scndmax2 = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (max2 < arr2[i])
        {
            scndmax2 = max2;
            max2 = arr2[i];
        }
        else if (scndmax2 < arr2[i] && max2 != arr2[i]) // the first condition makes sure that we get the answer
            scndmax2 = arr2[i];                         // even when elements of array are in decreasing order.
                                                        //  and the second condition makes sure that we get right answer
    }                                            // even when the largest element is repeated several times in the array.
    printf("%d\n\n", scndmax2);

    /* Problem 12.- Given an array of integers, WAP to copy the contents of this array into another array.
                            arr[7]= {1,2,3,4,5,6,7}   */
    // Solution-
    int arr3[7] = {1, 2, 3, 4, 5, 6, 7};
    int brr3[7];
    for (int i = 0; i < 7; i++)
        brr3[i] = arr3[i];
    for (int j = 0; j < 7; j++)
        printf("%d ", brr3[j]);
    printf("\n");

    /* Problem 13.- Given an array of integers, WAP to copy the contents of this array into another array in
        reverse order.
                            arr[7]= {1,2,3,4,5,6,7}   */
    // Solution-
    int arr4[7] = {1, 2, 3, 4, 5, 6, 7};
    int brr4[7];
    for (int i = 0; i < 7; i++)
        brr4[i] = arr4[6 - i];
    for (int j = 0; j < 7; j++)
        printf("%d ", brr4[j]);
    printf("\n\n");

    /* Problem 14.- Given an array of integers, WAP to copy the contents of this array into another array in
        reverse order WITHOUT using any extra array.
                            arr[7]= {1,2,3,4,5,6,7}   */
    // Solution-
    // Method 1- using while loop-
    int ar[7] = {1, 2, 3, 4, 5, 6, 7}; // for this problem we swap the first element and last element, the second
    int i = 0, j = 6, temp;            // element and secondlast element and so on, using temp variable one by one.
    while (i < j)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }
    for (int k = 0; k < 7; k++)
        printf("%d ", ar[k]);
    printf("\n");

    // Method 2- using for loop-
    int temp1 = 0, ar1[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0, j = 6; i < j; i++, j--)
    {
        temp1 = ar1[i];
        ar1[i] = ar1[j];
        ar1[j] = temp1;
    }
    for (int k = 0; k < 7; k++)
        printf("%d ", ar1[k]);
    printf("\n\n");

    /* Problem 15.- Given two arrays of integers, WAP to check if the given arrays are palindrome or not.
                (1)            arr[9]= {1,2,3,4,5,4,3,2,1}
                (2)           arr[10]= {1,2,3,4,5,6,4,3,2,1}                   */
    // Solution-
    //(1)-
    int array[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int count = 0;
    for (int i = 0, j = 8; i < j; i++, j--)
    {
        if (array[i] == array[j])
            count++;
        else
            break;
    }
    if (count == 9 / 2)
        printf("given array is a palindrome\n");
    else
        printf("given array is not a palindrome\n");

    //(2)-
    int array1[10] = {1, 2, 3, 4, 5, 6, 4, 3, 2, 1};
    int count12 = 0;
    for (int i = 0, j = 8; i < j; i++, j--)
    {
        if (array1[i] == array1[j])
            count12++;
        else
            break;
    }
    if (count12 == 10 / 2)
        printf("given array is a palindrome\n");
    else
        printf("given array is not a palindrome\n\n");

    return 0;
}
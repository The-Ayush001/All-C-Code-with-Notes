#include <stdio.h>
#include <limits.h>

int byReference(int y[])
{ // function to change the first element of an array to 99.
    y[0] = 99;
    return 0;
}

void swap(int x[])
{                    // function to swap to numbers/elements of an array of size 2 without using pointers
    int temp = x[0]; // by taking advantage of the fact that array is passed by reference in a function
    x[0] = x[1];     // and not by value.
    x[1] = temp;
    return;
}

int main()
{ // main function.
    int ary[4] = {1, 2, 3, 4};
    byReference(ary);
    printf("%d\n", ary[0]); // output is 99. it proves that array is passed by reference in the function.

    int arraa[2] = {2, 9};
    swap(arraa);
    printf("%d     %d\n\n", arraa[0], arraa[1]);

    /* Problem 5.- WAP to find the minimum value out of all the elements in the given array.-  
                            arr111[8]={9,2,11,13,3,4,8,7}*/
    // Solution-
    int arrr111[] = {90000, -123128, 21311, -21313, 0, 3142134, -8, -7, -100, 102, -138376, 723675, 243232, 12232};
    int min = INT_MAX;
    for (int i = 0; i <= 13; i++)
    {
        if (arrr111[i] < min)
            min = arrr111[i];
        else
            continue;
    }
    printf("%d\n\n", min);

    /* Problem 6.- Given an array of integers, WAP to chanage the value of all the odd indexed elements to its second
        multiple and increment all the even indexed values by 10. also print the array. arr[8]= {1,2,3,4,5,6,7,8}   */
    // Solution-
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i <= 7; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }
    for (int j = 0; j <= 7; j++)
        printf("%d ", arr[j]);
    printf("\n\n");

    /* Problem 7.- Given an array of integers, WAP to count the number of elements of the array that are greater than
        12 . arr[9]= {1,23,4,32,213,11,12,0,43}   */
    // Solution-
    int arr1[10] = {1, 23, 4, 32, 213, 11, 12, 0, 43, 90};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] > 12)
            count++;
        else
            continue;
    }
    printf("%d", count);
    printf("\n\n");

    /* Problem 8.- Given an array of integers, WAP to find the difference between the sum of elements at even indices
        to the sum of elements at odd indices.
        arr[10]= {1,2,3,4,5,6,7,8,9,10}   */
    // Solution-
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int SumEven = 0, SumOdd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            SumEven += arr2[i];
        else
            SumOdd += arr2[i];
    }
    printf("%d\n\n", (SumEven - SumOdd));

    /* Problem 9.- Given an array of integers, WAP to find the total numbers of pairs of elements whose sum is equal
    to the number 12. also print the pairs.  arr[10]= {1,2,3,4,5,6,7,8,9,10}   */
    // Solution-
    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count1 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j && arr3[i] + arr3[j] == 12)
            {                                            // if we put j=i+1 instead of j=0 in the above line we will not need
                printf("(%d , %d)  ", arr3[i], arr3[j]); // to put i<j as a condition in the if function.
                count1++;
            }
            else
                continue;
        }
    }
    printf(" --> total no. of pairs = %d.\n\n", count1);

    /* Problem 10.- Given an array of integers, WAP to find the total numbers of triplets of elements whose sum
        is equal to the number 12 .also print the triplets.  arr[10]= {1,2,3,4,5,6,7,8,9,10}   */
    // Solution-

    int arr4[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count2 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                if (arr4[i] + arr4[j] + arr4[k] == 12)
                {
                    count2++;
                    printf("(%d , %d , %d)  ", arr4[i], arr4[j], arr4[k]);
                }
            }
        }
    }
    printf(" --> total no. of triplets = %d.\n\n", count2);
    return 0;
}

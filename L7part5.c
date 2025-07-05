#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int main()
{

    /* Problem 19.- WAP to find a duplicate element from a given array of integers.
                              arr[8]={1,2,7,4,5,8,7,8}     */
    // solution-
    int arr[8] = {1, 2, 7, 4, 5, 8, 7, 8}, m = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j] && arr[i] != m)
            {
                printf("%d is a duplicate element.\n", arr[i]);
                break;
            }
        }
    }

    /* Problem 20.- WAP to find the unique number in a given array where all the elements are being repeated
        twice with one value being unque.
                              array[7]={1,3,2,4,1,2,3}     */
    // solution-
    int array[7] = {1, 3, 2, 4, 1, 2, 3},i,j;
    for ( i = 0; i < 7; i++)
    {
            bool flag=false;
        for ( j = 0; j < 7; j++)
        {
            if (array[i] == array[j] && i!=j)
            {
                flag = true;
            }
        }
        if (flag==false)
            printf("%d is unique",array[i]);
    }



    /* code shown in lecture:
    (this code in not working as it is supposed to be...)
    int array[7] = {1, 3, 2, 4, 1, 2, 3};
    for (int i = 0; i <= 6; i++)
    {
        bool flag = false;
        for (int j = i + 1; j <= 6; j++)
        {
            if (array[i] == array[j])
            {
                flag = true;
            }
        }
        if (flag = false)
        {
            printf("%d", array[i]);
            break;
        }
    }
    */
    return 0;
}

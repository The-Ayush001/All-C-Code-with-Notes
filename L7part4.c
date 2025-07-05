#include <stdio.h>
#include <stdbool.h>

void reverse(int a[], int si, int ei)
{             // here si denote starting index and ei is for ending index of the elements
    int temp; // that are to be reversed.
    for (int i = si, j = ei; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}
int main()
{

    /* Problem 16.- Given an array of integers, WAP to rotate the given array 'a' by k steps where k is inputted
        by user and is a non-negative integer.
                                a[10]={1,2,3,4,5,6,7,8,9,10}       */

    // Solution-

    /*this problem is very complpicated (at least at this point of time, i think it is) and the way we will solve this
    problem is as follows-
    1.to start, we know that if we reverse the given array number of times equal to its size (i.e. 10 for this array)
        the new array will be the same as initial array since all the elements will rotate until they gain their
        initial index.
        so the first thing we will do is "k = k % size" (i.e. k = k % 10 for this array).
        this makes the number of rotations that need to be done in the program far less when k>size, than otherwise.
    2.now we will reverse all the elements of the array so that its last elements become its first elements, for ex-
                    initially array is   {1,2,3,4,5,6,7,8,9,10}
                                array= {10,9,8,7,6,5,4,3,2,1}
    3.once that is done, we need to reverse the first k elements of the block, so -
                      for k=2, array= {9,10,8,7,6,5,4,3,2,1}
                      for k=3, array= {8,9,10,7,6,5,4,3,2,1}
                      and so on....
    4. now all we need to do is to reverse all rest of the elements, except the first k elements as such-
                      for k=2, array= {9,10,1,2,3,4,5,6,7,8}
                      for k=3, array= {8,9,10,1,2,3,4,5,6,7}
                      and so on....
    5.therefore, as shown above the array will be rotated by k steps like this-
        now we just print the new array and we are golden!

    Side Note- in this problem we will have to reverse the elements of the array multiple times therefore it
        would be more efficient and less time consuming for us to just make a function for reversing some specific
        elements of the array. since we sometimes need to reverse only specific elements of array and not all of them
        the same time, we need to make an adequate function for that and such the function will need some changes
        as compared to the code for reversing elements that we have studied so far. so we need to be mindful of that
        as well. */ 

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, k;
    printf("enter the number of rotations required:");
    scanf("%d", &k);
    if (k > 10)
        k %= 10;
    reverse(a, 0, 9);     // this makes the array {10,9,8,7,6,5,4,3,2,1}.
    reverse(a, 0, k - 1); // ex- if k=3 then result of this code is {8,9,10,7,6,5,4,3,2,1}
    reverse(a, k, 9);     // ex- if k=3 as in above line then result- {8,9,10,1,2,3,4,5,6,7}...
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    /* Problem 17.- Given an array of integers, WAP to search if 4 is present in the given array.
        if it is present (one or more times) then print its index everytime it is present.
                           a[7]={1,2,3,4,5,4,7}       */

    // Solution-
    int ar[7] = {1, 2, 3, 4, 5, 4, 7};
    bool flag = false; // bool data type can only store "true" or "false" i.e. "1" or "0".
                       // any number other than 0 or 1 entered in bool data type variable is considered
                       // as 1 by the compiler. we are using it as an extra parameter to help us find out
                       // if a number in not present in the array.
                       // to use bool data type in C, we need to include the header file "stdbool.h".
    for (int i = 0; i < 7; i++)
    {
        if (ar[i] == 4)
        {
            printf("4 is present in the array at index %d\n", i);
            flag = true;
        }
    }
    if (flag == false)
        printf("the number is not present in the array.\n");

    /* Problem 18.- Given an array containing elements from 1 to 20, except one element in this range is
        missing. find the missing element-

                               {2,3,13,14,7,8,17,4,5,6,19,20,9,10,11,12,15,1,16}       */
    // solution-
    int ar2[19]={2,3,13,14,7,8,17,4,5,6,19,20,9,10,11,12,15,1,16};  
    int sum=0,sum1;
    for (int i=0;i<19;i++){
        sum= sum+ar2[i];         // gives sum of all elements present in array
    }
    sum1=(20*(20+1))/2;       //give sum of first 20 natural numbers as sum of first n natural numbers = n*(n-1)/2
    printf("the missing number is %d",sum1-sum);

    return 0;
}
#include <stdio.h>
#include <limits.h> // added to use INT_MIN .

/*ARRAYS - suppose we have to store 100 students' score in a program so that we can manipulate/access it as
we want, to do this we can make 100 different int-type variables with different names and then assign the marks
of the students to those variables one by one. however this will be very time taking and not a=wfficient at all.
as the number of things to store increases it will become be very hard for us to type in every individual
information one by one.
As such we use someting called Arrays.
An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. It can
be used to store the collection of primitive data types such as int, char, float, etc., and also derived and
user-defined data types such as pointers, structures, etc.
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
the format to declare an array is similar to that of a variable-

        data_type array_name [dimension_of_array];

to store integer values in the array we use int data type and so on.
array name can be anything valid as identifier - a,b,C,X,y,arr etc.
dimension of array or size of an array refers to the number of elements that can be stored int that particular array.
if we type-        int arr[5];
then that would mean that we have declared an array nemed arr that stores int data and has 5 elements in total.
to assign values to an array we do this-
                   int arr[5] = {2,5,3,5,12}
this would mean that we have now stored 5 integral elements in the array named arr which could store 5 elments.
now to access the elements of the array individually we take help of something called index or indices(plural)
of an array.
the indices of an array refer to the no. of element we are talking about in that array.
for example if we say arr[0] then that means we are talkinga bout the first element of the array arr which in this
case is 2.
in the array given above arr[1] has the value 5,arr[2] has the value 3,arr[3] has the value 5,arr[4] has the value
of 12.

Note -
1.once the declaration of size of an array is done, the next time we type the array name with square bracket
   and a number between the brackets, it would mean that we are talking about individual elements of the array.
2.an array index always starts with 0 i.e. arr [0] would refer to the first element of the array.
   and so arr[n] would {refer to the (n+1)th element of the array.
3.we can also store characters in an array like this-
                char ar[10]= {'a','b','c','A','X','x','!','$','%','*'};
   here ar[0] is a, ar[1] is b , ar[6] is ! and so on.
4.it is important to note that all elements in an array must be of the same data type.This means we cannot mix
   different types of values, like integers and floating point numbers, in the same array.
5.array can also be declared as-
                int size=10, array23[size];
   though we should make sure that the data-types of both the variable 'size' and the array 'array23' are the same.
6.if we want to change the value of a particular element of an array it can be done like this-
                int ar[3]= {1,2,3};
                ar[0]=55;
   this will change the value of the first element of the array from 1 to 55.
7. we can also choose not to mention the size of an array at the time of declaring it as such-
                int abc[]={1,2,3,4,5,5,6,6,6,7,10};
   if we do so we can later add as many elements as we want in the array simply with the help of its indices.
   for ex- the above array has 11 elements with its last element being 10 i.e. abc[10]=10.
   we can add even more elements as follows-
                abc[11]=32;
                abc[12]=223;
   and so on...                         ...(this might be wrong)
8.an array can not be declared as such-
                int c = {1,2,3};
   here c is taken by the compiler as a single variable and as such it cannot store 3 values. we must use the
   square brackets when declaring an array.
9.Memory allocation in arrays-
   the elements of an array take memory depending on their data types. for example if an array is of int type then
   each element of that array will take 4 bytes of space.
   and the elements of the array will take contimuous blocks of memory for its elements, for ex-
   if we have an array named arr and it is of int type then arr[0] will first be assigned some random memory blocks
   of 4 bytes in the storage and the element arr[1] will take the next 4 bytes,arr[2] will take the next 4 bytes,
   arr[3] will take the next 4 bytes, and so on...
   hence the memory allocation for elements of an array are continuous.
10.address of the first element of an array is often considered to be the same as address of the whole array.
11.if we create an array of size 8 and only assign the values to 4 elements the rest of the 4 elements will be
   assigned random garbage values.
12.if we assign a value to an element of an array whose index exceeds the size of an array then we will get
   an error message and the value will not be assigned. the error will be- "index out of bounds".
   for ex-                 int arr[4]={1,2,3,4};
                           arr[10]=11;
                           printf("%d",arr[10]);
   the above code should give out of bound error when run.
   however, in my laptop the code works and output is 11.if i simply try to print arr[23] (without assigning it any
   value) for the above array I get some garbage value as output and do not get an error. therefore i assume that the
   error message depends upon the compiler.
   note- from different sources on the internet i've gathered that C does not give out of bound error and the
   "undefined behaviour" like assigning arr[10] some value or printing arr[23] often work in C although they can
   cause crashes,data corruption etc in the program and as such we should always mind the capacity of an array.
13.when we pass an array as an argument to a function what actually gets passed is the address of the first element
   of the array(and not the whole "address of the array") i.e. array is always passed by reference, when passing it
   to an argument to a function. this is shown through codes in next c file.

*/

int main()
{

   // To take all the elements of an array as input or to print all the elements of an array we use loops-
   float array1[4];
   for (int i = 0; i < 4; i++)
   {
      printf("Enter the element number %d of the array: ", i + 1);
      scanf("%f", &array1[i]); // this takes the elements of array as input from user.
   }
   for (int j = 0; j < 4; j++)
   {
      printf("%f ", array1[j]); // this prints the elements of the array.
   }
   printf("\n");
   for (int k = 3; k >= 0; k--)
   {
      printf("%f ", array1[k]); // this prints the elements of the array in reverse order.
   }
   printf("\n\n");

   // printing addresses of the elements of an array-
   int array333[5] = {1, 2, 3, 4, 5};
   for (int i = 0; i <= 4; i++)
   {
      printf("%p\n", &array333[i]);
   }

   // finding the size of array-
   //...loading...(i'm feeling lazy and i don't wanna write the code right now)

   printf("\n\n");

   /* Problem 1.- given an array of marks of students, if the marks of the student is less than 35 print his/her
    roll no. (roll number here refers to the index of the student). marks[]= {100,23,42,17,55,45,87,20}.   */
   // solution-
   int marks[8] = {100, 23, 42, 17, 55, 45, 87, 20};
   for (int i = 0; i <= 7; i++)
   {
      if (marks[i] < 35)
         printf("%d  ", i);
      else
         continue;
   }
   printf("\n\n");

   /* Problem 2.- WAP to print the sum of all the elements of the array- arr2[5]={1,3,5,7,10}.  */
   // Solution-
   int arr2[5] = {1, 3, 5, 7, 10};
   int sum = 0;
   for (int i = 0; i <= 4; i++)
   {
      sum = sum + arr2[i];
   }
   printf("%d \n\n", sum);

   /* Problem 3.- WAP to print the product of all the elements of the array- arr2[5]={1,3,5,7,10}.  */
   // Solution-
   int arr3[5] = {1, 3, 5, 7, 10};
   int prod = 1;
   for (int i = 0; i <= 4; i++)
   {
      prod = prod * arr3[i];
   }
   printf("%d \n\n", prod);

   /* Problem 4.- WAP to find the maximum value out of all the elements in the given array.-  arr111[8]={9,2,11,13,3,4,8,7}*/
   // Solution-
   int arrr111[8] = {9, 2, 11, 13, 3, 4, 8, 7};
   int max = -1;
   for (int i = 0; i <= 7; i++)
   {
      if (arrr111[i] > max)
         max = arrr111[i];
      else
         continue;
   }
   printf("%d\n", max);
   /* in the above problem we declared a variable max and assigned it the value of -1, we did so as we needed a number
   smaller than any other number mentioned in the above array so that we could compare the elements of the array
   with it. in this problem it was easy for us to see a number smaller than any number in the array but if we had
   to solve this problem with a different array with hundreds of elements then it would be impracticle to look for
   some number smaller than any element of array. as such we use something called " INT_MIN ". this INT_MIN refers to
   the minimum value that an int data type variable can have in C and is equal to -2147483648.
   INT_MIN is provided to us by a header file limits.h as such before using this value we must also include this
   header file to our code.
   Note- Using INT_MIN is not the only way, we could also put max = arrr111[0] to get the same answer.
   And so one of the correct ways of solving the above problem is -     */
   int ar111[8] = {9, 2, 11, 13, 3, 4, 8, 7};
   int maxm = INT_MIN; // instead of using INT_MIN we could also just put maxm=ar111[0] to get same result.
   for (int i = 0; i <= 7; i++)
   {
      if (ar111[i] > maxm)
         maxm = ar111[i];
      else
         continue;
   }
   printf("%d\n", maxm);

   // Similarly, if we have to find the minimum of given elements of an array we can make use of INT_MAX to get the maximum
   // value an int data type can have. though we will have to include limits.h header file for that as well.

   return 0;
}
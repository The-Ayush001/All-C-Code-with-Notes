/*STRINGS-

Definition - Strings are basically character array. A String in C programming is a sequence of characters terminated
with a null character ‘\0’. The C String is stored as an array of characters. The difference between a character
array and a C string is that the string in C is terminated with a unique character ‘\0’.
 */

#include <stdio.h>
int main()
{

    char arr[5] = {'a', 'b', '!', 'o', '@'}; // this is a character array.
    for (int i = 0; i < 5; i++)
        printf("%p\n", &arr[i]); // this shows the memory allocation of character arrays.
                                 // the allocation will be continuous and elements will have consecutive
                                 // address as char data type takes only 1 byte.

    // NOTE - we know that the ASCII values of 'A' and 'a' are 65 and 97 respectively.
    // we sholud also remember the ASCII values of '0' and '9'. they are 48 and 57 respectively.

    /*now let us imagine that we have to store the words "hello world" as some data.
    to do this we can make a character array and put all the letters of that phrase one by one in the array as
    elements of that array. we can do it as shown below-   */
    int a[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'}; // we needed some space between 'hello' and 'world'
    for (int i = 0; i < 11; i++)                               // so we also had to include the whitespace as a character.
        printf("%c", a[i]);                                    // note - the ASCII value of whitespace is 32.
    printf("\n");
    /*the above code shows us how we can store and the print a phrase by using character arrays.
    however, as it is clear from this code that initialising such an array is quite an inefficient process and it
    also requires a loop to print the words (elements in the array).
    this is the reason we do not use such character arrays to store phrases or sentences.
    instead we use something called "strings".
     */

    /*before we move on to strings let us understand one more thing regarding character array first-
    in the above code we had to print the elements forming the required words. however to do that we had to know
    the total number of elements in the array in order to set the limit for the no. of iterations of the loop.
    the no. of elements in the above array was 11 (including the whitespace).
    had we not known the number of elements we woud not know when to end the loop.
    counting the number of elements for this small array was easy however if we had an array with, lets say, 70+
    elements then initializing the array as well as counting the elements would be troublesome.
    there is no other option for the initilization process except using strings. however to remedy the problem
    of finding the number of elements we can use something called "null character" (which is different from whitespace).
    null character is written as -       \0            (i.e. backslash zero)
    it is a valid character in C lang. with its ASCII value being zero.

    (note - the ascii value of the character zero '0' is 48 and not zero).

    so if we didn't know the number of elements in above character array, we could do something like this to print
    said array -
    */

    int a1[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    int i = 0;
    while (a1[i] != '\0')
    {
        printf("%c", a1[i]);
        i++;
    }
    printf("\n");
    // for such loops we do not need to know the size of the array.
    // note-- remember to put the null chacarter in single inverted commas when using it.


    // now moving onto strings, the above array b[] was a string by definition.
    // string is just another way of representing character arrays in which we 'USUALLY' do not write the
    // letters individually and instead write the words as they are inside double inverted commas, like this-
    char b[] = "Once again, hello world!!";
    i = 0;
    while (b[i] != '\0')    // note that we can use 'null character' to set the limit for loops while using strings.
    {                       // this is because the compilers usually puts a null character at the end of our string
        printf("%c", b[i]); // automatically, and as such we do not even need to add that null character at the
        i++;                // end of the string making this way of storing words, sentences, etc quite easy.
    } 
    // note that null character is not automatically added at the end of character array when we
     // are inputting the letters individually. that function is only for strings.

    /*size of a string-
    one can choose not to mention the size of a string 'cause honestly who'd count all those letters.
    However it is better to understand the concept of the size of a string as we might need to access and/or manipulate
    individual characters of the string, which is done using indices just like we do with arrays.
    the size of any string is simply equal to the number of characters in the string, including the whitespaces,commas,
    dots, etc along with one null character which is hidden at the end of any string.
    so the size of above string b[] will be 4+1+6+1+5+1+7+1 = 26.
    (here all of the 1s denote the whitespaces except the 1 that was added at the end, which is for the null character).

    in short, the size of a string is the total number of characters in the string (including whitespaces) plus 1.
    where the extra 1 represents the null character.

    now let us understand what will happen if we put the size less or more than actual size of the string --
    */
    printf("\n\n");
    char str[7] = "i_am_here"; // actual size is 10 but we put 7 as the size.
    printf("%s", str);         // we print a string like this. %s is the format specifier for strings.
                               // it shows a warning (warning: initializer-string for array of chars is too long) in 
                               // the terminal and prints only the first 7 characters of the string.

    printf("\n");
    char str1[50] = "i am here."; // actual size is 11 but we put 7 as the size.
    printf("%s", str1);
    // code works fine and no extra character is printed. this is because the null character hidden after the 'dot'
    // terminates the string.

    // accessing and manipulating individual characters of a string--
    char strr[] = "i am very sleepy right now.";
    printf("\n%s", strr);       
    printf("\n%c", strr[2]);
    printf("\n%c", strr[3]);
    strr[2] = 'm';
    strr[3] = 'a';
    printf("\n%c", strr[2]);
    printf("\n%c", strr[3]);
    printf("\n%s", strr);

    strr[0]=65;                // this replaces the 0th index character with the character whose index is 65 i.e. 'A'. 
    printf("\n%s", strr);

    printf("\n");
/* ways to print a particular element of an array/string :
    arr[i]
    i[arr]
    *(arr + i)
    *(i + arr)
    for example-                                            */

    char br[] = "Once again, hello world!!";
    i = 0;
    while (br[i] != '\0')   
    {                       
        printf("%c", *(br + i)); 
        i++;
    } 

    return 0;
}
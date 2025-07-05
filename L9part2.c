#include <stdio.h>
#include<string.h>
int main (){
// examples of input and output of string without loop-
char string[100];
printf("enter the string:");
gets(string);                       // scans the whole string
puts(string);                       // prints the string

// char str[100];
// printf("enter the second string:");
// scanf("%s",str);                     // scans a single word of the string (not very useful)
// printf("%s",str);                    // prints the string

// Note- using gets and puts is better than using loops or simply using scanf/printf when it comes to strings.
// we can also use puts funtion to simply print the string that we usually did using printf till now-
puts("\nthis is better than using printf()");

// HOWEVER, gets() is unsafe as it reads string from standard input and prints the entered string, but it 
// suffers from Buffer Overflow as gets() doesn’t do any array bound testing. gets() keeps on reading until 
// it sees a newline character.
// Hence we are back to using scanf() however we have to make some changes in scanf() in order to scan the 
// whole string and not just the first word. we do it like this -
    char strn[100];
    printf("enter the third string:");
    scanf("%[^\n]s",strn); 
    printf("%s",strn);
    puts("\nthere is some errer. the above code works individually but not when used after the second code.");


/* Note - We do not use '&' sign when scanning a string through scanf() function. the reason is :
 We know that the ‘&’ sign is used to provide the address of the variable to the scanf() function to store the 
 value read in memory. As str[] is a character array so using str without braces ‘[‘ and ‘]’ will give the base
 address of this string. That’s why we have not used ‘&’ in this case as we are already providing the base 
 address of the string to scanf. */

// Problem 1 - WAP to reverse a string.
// solution -
char stn[100];
puts("Enter the string:");
scanf("%[^\n]s",stn);
puts("the entered string is:");
puts(stn);








}
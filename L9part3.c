#include <stdio.h>
#include<string.h>
int main (){
// Problem 1 - WAP to reverse a string.
// solution -
char stn[100];
puts("Enter the string:");
scanf("%[^\n]s",stn);
puts("the entered string is:");
puts(stn);
int k=0,size=0;
while(stn[k]!='\0'){
    size++;
    k++;
}
for(int i=0,j=size-1;i<=j;i++,j--){
    int temp=stn[i];
    stn[i]=stn[j];
    stn[j]=temp;
}
puts("The string after reversal is:");
puts(stn);

//pointers for strings-

char str[]="writting codes";            // printing string without pointers.
int i=0;
while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
}

printf("\n");
char *ptr= str;                      // printing string with pointers.
while(*ptr!='\0'){                   //*ptr initially refers to the first element of str.
    printf("%c",*ptr);
    ptr++;              // ptr is address of str (str[0]) so by increasing it we are ascessing next memory
    i++;                // which is allocated to the next element of the string as memory allocation is continuous.
}                       // once ptr is increased by 1 it means that *ptr now refers/points to the 2nd element of str.
                        // now this 2nd element is printed and addres is updated by 1...and so the loop goes on.


// another way of initializing string:
char *ptrr= "hello world!";
printf("%s",ptrr);            //prints the string
printf("\n%c\n",*ptrr);         // prints the first character of the string.
//char pointer can also be used to store address of the string. 
// such direct initialization using pointers results in a read only memory allocation of character array and hence
// causes errors (undefined behavior) when we try to change the characters of the string.

/*Note- in normal initialization we can modify only the individual characters of the string and not the entire string
 however when it comes to pointer initilization we can modify the entire string at once although we can not access
 individual characcters in such cases.
*/
//normal initialization-
char stng[]="this is a string.";
puts(stng);
//stng="trying to modify";      // doesn't work
//stng[]="trying to modify";    // doesn't work
stng[0]='T';                    // works well
puts(stng);

// pointer initialization-
char *pntr="a string it is.";
puts(pntr);
//pntr[0]='A';                 // doesn't work
pntr="A string it is";         // works well
puts(pntr);

/*  when we do pointer initialization for a string the pointer holds the address of first element/character 
 of the string and when we modify the string as we did above the first string is not actually modified,
 instead the pointer now replaces the previous addres inside it with the address of the first character
 of the newer string. and then when we print the pointer using %s we get the second string as output.
 since this is how it works, we cannot actually modify individual characters of the string that easily.
 if we use pointer initialization we cannot change a string from "hello" to "Hello" without 
 replacing the whole string. */

 char strrr[]="hello";
 char* ptrrr=strrr;
 ptrrr="hola";                  // pointer now points to different string and does not modify initial string.
 printf("\n%s",ptrrr);
 printf("\n%s",strrr);          // initial string is same as before.
 ptrrr=strrr;                   // resetting the pointer to first string.
 *ptrrr='L';                    //*ptrrr points to the first char of string so it can be replaced.
 printf("\n%s",strrr);


}
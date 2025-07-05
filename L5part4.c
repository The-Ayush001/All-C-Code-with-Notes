/* Library function-
unlike void minimum() function that we used in L5part3.h, there are some in-built functions that we can use 
without writing the whole code for it. such functions are called library functions.
A library function is a pre-compiled code that performs a specific task and is stored in a library,
which is a collection of object files. 
Library functions are used to reuse code and avoid writing everything from scratch. They offer a widerange of 
functionalities, such as input/output operations, string manipulation, mathematical calculations, and more. 
To use a library function, you need to: 
Call the appropriate header file at the beginning of your program. 
Use the preprocessor statement #include <filename> to call the header file. 
Access the library function by writing the function name, followed by a list of arguments. 

two example of library functions are pow() and sqrt().
pow() function is used to find the value of one number raised to the power of another number and 
sqrt() is used to find the square root of a number.
to use these two library functions we need to link a library, which has the pre-compiled code for it,
to our code. the library (heaader file) required for pow and sqrt is 'math.h'.
one such library is 'stdio.h'. to link a library we write '#include< >' and write the header file name 
inside the arrow brackets after include.

*/


#include <stdio.h>
#include <math.h>

int main (){

 int a = pow(2,5);
 printf("2 raised to the power 5 is %d\n",a);

 int b = pow(5,5);
 printf("5 raised to the power 5 is %d\n",b);

  int c = pow(4,6);
 printf("4 raised to the power 6 is %d\n",c);

int p,q,r;
 printf("to find the value of one number raised to the power of another:\nenter the base-");
 scanf("%d",&p);
 printf("\nenter the exponent-");
 scanf("%d",&q);
 r=pow(p,q);
 printf("the ans is %d\n",r);


 
 int aa=sqrt(169);
 printf("sq root of 169 is %d\n",aa);

int bb;
 printf("enter the number whose sq root is required:");
 scanf("%d",&bb);
 int cc=sqrt(bb);
 printf("the sq root of %d is %d",bb,cc);




    return 0;
}
#include <stdio.h>

void swap (int a,int b){
 a=a+b;
 b=a-b;
 a=a-b;
    return;
}
int main(){
int c,d;
printf("enter c:");
scanf("%d",&c);
printf("enter d:");
scanf("%d",&d);
swap(c,d);
printf("c=%d and d=%d",c,d);
}

/* the code written above is supposed to be a code for making a function to swap nubmers easily by using function
call later in the code. however this does not work and the nubmers are not swapped even when we run the code.
this is because of something called pass by value. pass by value basically means that we are passing only the values
into the function so the containers a and b take the inputs as their value and swap it but c and d are not swapped 
so our teminal does not give us the answer we require.
to remedy this problem we can make use of a concept called pass by reference using pointers.
*/

/*before understanding pointer we need to remember a few samll things clearly.

Scope of a variable - The scope of a variable in C is the block or the region in the program where a variable
is declared, defined, and used. Outside this region, we cannot access the variable, and it is treated as an
undeclared identifier. for example when we use for loop we use i as a variable but outside the loop we can not 
access it, this is because the scope of the variable i is limited to the loop it is used in.


Parameters - Parameters are the data values that are passed from calling function to called function.
In C, there are two types of parameters - Actual Parameters and Formal Parameters.

The actual parameters are the parameters that are speficified in calling function. The formal parameters
 are the parameters that are declared at called function. When a function gets executed, the copy of actual 
 parameter values are copied into formal parameters.

In C Programming Language, there are two methods to pass parameters from calling function to called function
and they are as follows- Call by Value and Call by Reference.

Call by Value - In call by value parameter passing method, the copy of actual parameter values are copied to
formal parameters and these formal parameters are used in called function. The changes made on the formal
parameters does not effect the values of actual parameters. That means, after the execution control comes
back to the calling function, the actual parameter values remains same.
(this is the reason our code, written at top of this c file, could not swap the numbers.)

Call by Reference - In Call by Reference parameter passing method, the memory location address of the actual
parameters is copied to formal parameters. This address is used to access the memory locations of the
actual parameters in called function. In this method of parameter passing, the formal parameters must be 
pointer variables.
That means that in call by reference parameter passing method, the address of the actual parameters is passed
to the called function and is recieved by the formal parameters (pointers). Whenever we use these formal 
parameters in called function, they directly access the memory locations of actual parameters. So the 
changes made on the formal parameters effects the values of actual parameters.

*/


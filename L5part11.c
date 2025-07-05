/* Pointers - A pointer is a variable that stores the memory address of another variable as its value.
A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
the format specifier for pointers is %p.when we are printing the address of a variable without using
pointer variable we also use '&' after comma (just like we do in scanf).

*/
#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d\n", a);  // this prints the value of variable 'a'.
    printf("%p\n", &a); // this prints the address of the variable 'a' where 5 is stored.
    printf("%d\n", &a); // this does not print the address of the variable 'a' but prints something else.
    int b = 5;
    printf("%p\n", &b); // this prints the address of variable 'b'. this address will be different from the address of
                        // of 'a' even though the values of both 'a' and 'b' is the same.

    int* c = &a;       // * is used to show that the variable is being used to store address of another variable.
    //this line can also be written as  -->  "  int * c=&a;  " or "  int *c=&a;  ". The latter is usually prefered.
                       // int here is used to show what type of data is held by the variable whose address is
                       // being stored in 'c'.
                       // if 'a' was a float data type, we would write   " float *c = &a; " .
                       // here &a denotes the addres of 'a' so c is assigned the value of address of a.
    printf("%p\n", c); // this prints the address of the variable 'a' where 5 is stored.
                       // its value will be the same as the value printed by second printf function.

    // note that here 'a' is a container where the value 5 is stored and it has an address which we printed in second
    // printf function. similarly 'c' is a container where the value of address of 'a' is stored. so 'c' will have its
    // own address as well. we can also print this address quite easily, as shown below-
    printf("%p\n", &c); // this prints the address of 'c'.

    // we can also print the value of a variable using its address using pointers.
    printf("%d\n", *c); // this prints the value of the variable whose address is stored in 'c'.

    printf("%p\n", &*c); // this prints the address of variable 'a'.

    int m = 23;
    printf("%d\n",m);
    printf("%p\n",&m);     // this prints the address of variable 'm'.
    int *n;                // we declare the pointer variable here and use it later.
    n = &m;                // printing the value of 'n' should give us the same ans as in above printf func.
    printf("%p\n",n);      // this prints the value stored in 'n' which is the address of 'm'.

/*  int s=56;             the second printf here does not print anything and it shows warning in the terminal.
    printf("%d",s);       this is due to the '*' in 4th line. once we have used pointer to declare that the 
    int *t= &s;           variable 't' is a pointer variable we do need to use '*' with 't' again.
    *t = &s;              this line here actually means that the variable whose address is stored in 't' is 
                          assigned the value of address of 's'.
    printf("%p",t); */

    int s=56;      
    printf("%d\n",s); 
    int *t = &s;    
    printf("%p\n",t);  
    *t = 299;             // this changes the value of 's' as this line points to the variable whose address is stored
                          // in 't' which is 's' and assigns that variable the new value of 299.
    printf("%d\n",s);     // this prints the new value of 's'.
    *t= 900;              // this again changes the value of 's'.
    printf("%d\n",s);     // this prints the newest value of 's'.

/* Double pointers -a double pointer is a type of pointer that points to another pointer, adding an extra layer 
of indirection to the basic pointer concept. Double pointers are declared by placing two asterisks (**) before 
the variable name.
The pointer to a pointer in C is used when we want to store the address of another pointer. The first pointer
is used to store the address of the variable. And the second pointer is used to store the address of the first
pointer. That is why they are also known as double-pointers.*/

int u = 98;      // integer value 88 is stored in 'u'.
printf("%d\n",u);   // this prints the value of 'u'.
int *v= &u;      // address of int 'u' is stored in int type pointer variable 'v'.
printf("%d\n",*v);  // this points to the variable whose address is stored in 'v' and prints the value 
                // stored inside it i.e. it prints the value of 'u'.
int **w =&v;      // address of int type pointer variable 'v' is stored in int type pointer variable 'w'.
printf("%d\n\n",**w);  // this points to the pointer variable whose address is stored in 'w' i.e. 'x' and then 
                // it goes to the variable whose address is stored inside this pointer 'x' i.e. 'u' and prints the 
               // value stored inside of 'u'. 
               // In short, this printf line does the same as the above two printf lines and prints the value of 'u'.

int uu = 104;
printf("%d\n",uu);    // this prints the value stored inside 'uu'.
int *vv= &uu;  
printf("%p\n",vv);     // this prints the address of 'uu' (which is stored inside 'vv').
printf("%p\n",&vv);   // this prints the address of 'vv'.
int **ww =&vv;      
printf("%p\n",ww);    // this prints the address of the pointer 'vv' whose address is stored in 'ww'.
printf("%p\n\n",&ww);   // this prints the address of the double pointer 'ww'.

// note that we pointers are not limited to double pointers. we can use triple pointers and quadruple pointers
// etc as well.
int ***xx= &ww;       // here 'xx' is a triple pointer and is storing the address of the double pointer 'ww'.
printf("%p\n",&xx);     // this will print the address of 'xx'.
printf("%p\n",xx);      // this will print the address stored inside 'xx' which is the address of 'ww'.
printf("%p\n",*xx);     // this will print the value stored inside 'ww' which is the address of 'vv'.
printf("%p\n",**xx);    // this will print the value stored inside 'vv' which is the address of 'uu'.
printf("%d\n",***xx);   // this will print the value stored inside 'uu' which is 104.

/* Note that if we use only one * in palce of ** when declaring double pointer the code will work but it will show
 a warning thus the correct way of doing it is to use ** when working with double pointers. */



    return 0; 
}
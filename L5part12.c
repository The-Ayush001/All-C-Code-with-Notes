// Here we will W.A.P. to swap two numbers by using the concept of pass by reference with the help of pointers.

#include <stdio.h>
void swap(int *a, int *b)         // here in our swap function we declare that a and b will be storing addresses
                                  // of int type variable.
{ 
  // next 3 lines are code to swap the value of the variables whose addresses are// stored in 'a' and 'b'.
    int temp = *a;      
    *a = *b;            
    *b = temp;          
}

int main()
{
    int x = 2, y = 9;
    printf("%d   %d\n", x, y);   // this prints the values of x and y.
    swap(&x, &y);                // here the swap function is called and it swaps the values of x and y.
    printf("%d   %d\n", x, y);   // this prints the new values of x and y.

// we wrote the above code to swap 2 no. in main func. without introducing new pointer variables.
// we can aslo write the code to swap 2 no. using the pointer variables as shown below-
    int m=3,n=28;
    printf("%d   %d\n", m, n);
    int *c=&m,*d=&n;
    swap (c,d);
    printf("%d   %d\n\n", m, n);



    return 0;
}
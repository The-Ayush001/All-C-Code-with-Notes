// example of funtion-
/*  we know how to write a code to find the smallest of three distinct numbers. but if we have to find the smallest
of three distinct numbers multiple times in our codes then it is better for us to use function and call it
whenever needed. such an example is shown below. here we use the code to find minimum of 3 numbers multiple times-
twice while taking input from user and once with the 3 numbers already known. */

#include <stdio.h>
int minimum(int m, int n, int o)
{
    int min;
    if (m < n && m < o)
        min = m;
    else if (n < m && n < o)
        min = n;
    else if (o < m && o < n)
        min = o;

    return min;
}
int main()
{
    int a, b, c;
    printf("enter the first number -");
    scanf("%d", &a);
    printf("enter the 2nd number -");
    scanf("%d", &b);
    printf("enter the 3rd number -");
    scanf("%d", &c);
    int mini = minimum(a, b, c);
    printf("the minimum of the three numbers is %d\n", mini);
    // code
    // code
    // code
    // code
    // code         // here the rest of our code unrelated to minimum of numbers could be written.
    // code
    // code
    // code
    // code
    // code
    int p, q, r;
    printf("enter the first number -");
    scanf("%d", &p);
    printf("enter the 2nd number -");
    scanf("%d", &q);
    printf("enter the 3rd number -");
    scanf("%d", &r);
    int minim = minimum(p, q, r);
    printf("the minimum of the three numbers is %d\n", mini);

    // code         // here the rest of our code unrelated to minimum of numbers could be written.

    int u = 43, s = 33, t = 21;
    int minima = minimum(s, u, t);
    printf("min= %d", minima);

    return 0;
}


/* return type -
return type is the keyword we use before function name, for ex- we used 'int' befor the func name 'minimum' so
int is the return type. void, char ,float etc can also be return type.
In C programming, the return type of a function is the data type of the value it returns.
Every function declaration and definition must specify a return type, even if it doesn't return a value.
If a return type isn't specified, the compiler assumes the default return type is int.
in above ex we returned minimum of three integers which was an integer so the return type was int.
if we are returning a character then we use the char return type before function name.

Note that we do not return anything at the end of void. A void function performs a task, and then control 
returns back to the caller-- but, it does not return a value.
Usually such functions are called for their side effects, such as performing some task or writing
to their output parameters.
in L5part1.c the void return type was used because we only used the function to print something and we didn't need
to return any value ( integer,char etc ) with it.
*/

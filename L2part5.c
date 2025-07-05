#include<stdio.h>
int main(){

    /*Terniary operator- it is rarely used to write a simple if else code in one line instead of many lines 
     which means terniary operator is used to shorten a single if else code. note that it is not used in
     nested if else code.
     format of terniary operator-   expression 1 ? expression 2 : expression 3 ;
     here expression 1 is the condition to be put inside if and expression 2 is the code to implement 
     if the exp 1 is true and expression 3 is the code to implement if the exp 1 is false.
     below is an example of a simple if else code and then the same code is rewritten using terniary operator.*/

        printf("(without terniary op)making a program that tells if the inputted number is even or odd -\n");
        int nu;
        printf("Enter a number:");
        scanf("%d",&nu);
        if(nu%2==0){      
            printf("even"); 
        }
        else { 
            printf("odd");      
        }                  

        printf("\nsame program with terniary operator-\n");
        int num;
        printf("Enter a number:");
        scanf("%d",&num);
        num%2==0 ? printf("even") : printf("odd") ;


    /* Boolean data type / boolean expression - Very often, in programming, you will need a data type that can 
     only have one of two values, like:YES / NO or ON / OFF or TRUE / FALSE.
     For this, C has a bool data type, which is known as booleans.Booleans represent values that are either
     true or false. In C, the bool type is not a built-in data type, like int or char.
     A boolean variable is declared with the bool keyword and can only take the values true or false.
     Before trying to print the boolean variables, you should know that boolean values are returned as integers:
     1 (or any other number that is not 0) represents true and 0 represents false.
     Therefore, you must use the %d format specifier to print a boolean value.*/


    printf("%d", 10 == 10); // Returns 1 (true), because 10 is equal to 10.
    printf("%d", 10 == 15); // Returns 0 (false), because 10 is not equal to 15.
    printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55.

    printf("\n");

    int x = 10;
    int y = 9;
    printf("%d", x > y);  // Returns 1 (true), because 10 is greater than 9.

    printf("\n");

    int a=5,b,c,d;
    b=a=10;             // This means that a is assigned the value of 10 and so is b. so a=10 and b=10.
    c=a<10;             // Here a is not assigned any value so the exp a<10 will be treated as boolean exp.
                        // Since this exp is false as a=10, the value that will be assigned to c is 0 (for false).
    d=a==10;             // here as well, a==10 is boolean exp and is true so d=1 (for true).
    printf("%d %d %d %d",a,b,c,d);  // the output will be-  10 10 0 1

    printf("\n");

    //Note -->
    int pa=3;
    printf("%d\n",pa=5);   // Here the output will be 5. first the variable will be assigned the new value of 5 
                         //   and then that value will be printed.

    int g=35;
    printf("%d %d %d",g==35,g=50,g<40); 
      //  EXPALANATION -->
      /*here the terminal will read the printf line from right to left so first g<40 is true so its corresponding %d
      will get the value 1 then g will be assigned the value 50 and that value will be given to its corresponding %d
      to print now the part g==35 will be read and considered false as g=50 and so its corresponding %d will get 
      the value of 0. hence the output will be --> 0 50 1 
      */

   /*Note - Actually what we put into small bracket after if does not have to be a condition, it can also be
   an expression. if the expression is true the code in curly bracket works,if not then the code does not work.
   if an expression is put that does cannot be considered true or false then the code works if the resultant of
   that expression is any number (except zero) or any single character. if zero is the resultant the code does
   not work as zero is considered false. below are some examples-  */
   if (2+2%5)
      printf("\nthis works.");
   if (2)
      printf("\nthis works as well.");
   if (-2)
      printf("\nthis works,too.");
   if (0)
      printf("\nthis will not print anything.");
   if (-0)
      printf("\nthis won't work either.");
   if (a)    // here a is accepted as an expression as a was declared and given some value somewhere in 
             // above expamles,if we put some undeclared character the terminal shows error.
      printf("\nthis works,though.");
   char ch='#';    // '#' was undeclared so we identified it as a char data first.
   if ('#')
      printf("\nthis works.");
   if (a=12)   // here we assigned to 'a' a value of 12. so the code became 'if(12)' and hence the code worked.
      printf("\nthis also works.");
 
 





    return 0;
}
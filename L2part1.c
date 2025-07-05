#include<stdio.h>
 int main(){
  printf("IF-ELSE - Logical operators -\n\n"); 

    printf("example 1(only if)- making a program that determines if the inputted number is even or odd -\n");
     int n;
     printf("Enter a number:");
     scanf("%d",&n);         // we input the number.
     if(n%2==0){             // small bracket holds a condition, if the codition is true then the code 
        printf("even");     // in curly braket will be implemented. if not then code will be ignored.
        }
     if(n%2!=0){
        printf("odd");
     }
    /*here we only used if command and left else. 
     the if command is written like this- if( [CONDITION] ){ [CODE TO BE IMPLEMENTED IF CONDITION IS RIGHT] }.
     in above ex we wrote two if conditions- one for even and one for odd number. '==' means 'equal to' and 
     '!=' means 'not equal to'. however when we code like this one of the two ifs is going to be false
     and as such the code in that if will be ignored, which makes it inefficient to code like this.
     in such situations we use else command. in else, we do not have to give a condition and the code 
     in else is implemented if the confition in if command, written before else, is wrong and if the condition 
     is right then else is ignored and if is implemented.
     therefore the above ex can be properly coded as follows-*/

     printf("\nexample 1(if and else)- making a program that determines if the inputted number is even or odd -\n");
     int nu;
     printf("Enter a number:");
     scanf("%d",&nu);
     if(nu%2==0){      
     printf("even"); 
     }
     else { printf("odd");      // else does not need conditions so there is no small braket and
     }                          // only a set of curly braket for the code-to-be-implemented.

    // Note that in if and else ';' is used before '}' not and after it.

    //keep in mind that = and == are not the same. = is used to assign a value to a variable while 
    // == is used compare the LHS with the RHS and check whether they are equal.

    printf("\nex 2- program to determine if a number is divisible by 5 -");
     int a;
     printf("\nEnter a number:");
     scanf("%d",&a);
     if(a%5==0){
        printf("the number is divisible by 5");
     }
     else{printf("the number is not divisible by 5");
     }   

    printf("\nex 3- program to determine if an year entered is a leap year or not-\n");
     int b;
     printf("Enter a year:\n");
     scanf("%d",&b);
     if(b%4==0){
        printf("the year %d is a leap year",b);
     } 
     else{
        printf("the year entered is not a leap year.");
     }

    printf("\nex 4- program to find the absolute value of an inputted integral number:\n");
     int c;
     printf("enter an integer:\n");
     scanf("%d",&c);
     if(c<0){
        c= c*(-1); 
     }
     printf("the absolute value of entered integer is %d",c);
     
    printf("\nproblem 1- if the cost price and selling price of an item is input, write a program ");
    printf("to determine whether the seller made a profit or incurred a loss.");
    printf(" also determinte how much of a profit he made or loss he incurred.\n");
     float cp,sp;
     printf("enter cost price:\n");
     scanf("%f",&cp);
     printf("enter selling price:\n");
     scanf("%f",&sp);
     float pr=sp-cp;
     float ls=cp-sp;
     if(sp>cp){
        printf("seller has made a profit. the profit gained is equal to %f. ",pr);
     } 
     if(cp>sp){
        printf("seller has incurred a loss. the loss incurred is equal to %f. ",ls);
     }
     if(cp==sp){
        printf("the seller has neither made a profit nor incurred a loss.");
     }

    printf("\nproblem 2- given the length and breadth of a rectangle,write a program to find whether the area");
    printf(" of the rectangle is greater than its perimeter.\n");
      float ln, br, ar , pmr;
      printf("enter the length:");
      scanf("%f",&ln);
      printf("enter the breadth:");
      scanf("%f",&br);
      ar=ln*br; pmr=2*(ln+br);
      if(ar>pmr){
        printf("the area is greater than the perimeter.");
      }
     if(pmr>ar){
         printf("the perimeter is greater that the area.");
      }
     if(ar==pmr){
         printf("the area and the perimeter are both equal.");
      }


    return 0;
}
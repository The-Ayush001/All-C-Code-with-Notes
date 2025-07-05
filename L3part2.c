#include <stdio.h>
int main(){

 printf("making a program to print the G.P. 1,2,4,8,16,32,....upto n terms where n is inputted by user:\n");
 int n,a=1;         // n is the number of terms and a is the first term.
 printf("enter the total number of terms of the G.P.:");
 scanf("%d",&n);
 for (int i=1; i<=n; i++){
  printf("%d ",a);  
  a=a*2;   // because of this line, the value of a is doubled after every loop. 
 }        // we needed the value of a to double as 2 is the common ratio of the G.P..

 printf("\n\nmaking a program to print tne G.P. 3,12,48,192....upto n tems where n is inputted by user:\n");

 int b=3;          // again n is the number of terms(not introduced again as n is already introduced before) 
                    //and b is the first term.
 printf("enter the total number of terms in the G.P.:");
 scanf("%d",&n);    // when the value of n is entered in the program again the older value of n is replaced. 
 for (int i=1; i<=n; i++){
  printf("%d ",b);
  b=b*4;          // 4 is the common ratio.
 }

 printf("\n\nproblem 1- display the A.P. 100,97,94,91... upto all terms which are positive:\n");
 int c=100;
 for(int i=1; c>0; i++){  // note that the condition does not have to involve i, we can also
  printf("%d ",c);        //  use it to limit other variables.
  c=c-3;
 }         // one more way to solve this problem would be to find the total no. of positive terms 
         //  in the A.P. by solving (final term=) a+(n-1)*d>0 and finding max integral value of n. 

 printf("\nproblem 2- display the G.P. 100,50,25... upto n terms.\n");
 double d=100;
 printf("enter the number of terms of the G.P.:");
 scanf("%d",&n);
 for (int i=1; i<=n; i++ ){
  printf("%f ",d);
  d=d/2;
 }

 printf("\n\nproblem 3 (incorrect)- write a program to find out if a number is prime or composite.\n");
 int e ;
 printf("enter the number:");
 scanf("%d",&e);
 for (int i=2; i<e; i++){
        if (e%i==0){
                printf("the entered number is composite.\n");
        }
        else printf("the entered number is a prime number.\n");       
 }

 /*the above code is incorrect as it prints the sentences in if or else after every loop, to remedy that we
 use break command. break is used to stop the loop when the required condition is fullfiled once.
 however that alone is not enough to write a program to determine if a number is prime or composite, 
 for this problem we will also have to introduce another variable as shown in the solution below.*/ 

printf("\n\nproblem 3 - write a program to find out if a number is prime or composite or co-prime.\n");
 int f=0 ;
 printf("enter the number:");
 scanf("%d",&e);      // e was already declared as int type.
 for (int i=2; i<e; i++){
        if (e%i==0){
            f=1;      // if the condition is true then that means the number is composite and so the 
                      // value of the variable f will become 1. if the number is prime the code will not 
                      // be implemented and the value of f will remain equal to 0.
            break;    // Due to this, if the condition is true even once, the loop breaks or stops there.
        }
 } 
 if (e==1) printf("the entered number is a co-prime number.\n");
 // if the entered number is 1 then it is neither composite nor prime and so we have to write what to do if
 // 1 is entered in the program. if we do not write this line then when one is entered in the program the 
 // for command will not work as 1 is greater than the first value of i.
 // therefore the value of f will not change and thus the system will determine 1 to be prime.
 else if (f==1)   printf("the entered number is a composite number.\n"); 
 // if after the above for loop the value of f changes to 1 then that means that there was at least one 
 // factor of the entered number other than 1 or the number itself, and that means that the number is composite. 
 else  printf("the entered number is a prime number.\n");
 // if the value of f does not change then that means that the number was not composite and hence we can say
 // that it was prime (co-prime is already accounted for in the above code inside if command).

 // note that when e==2 the loop does not work and the value of f remains same and hence 2 is determined 
 // to be prime. loop does not work as i starts form 2 (as i=2) and max value of i is (e-1)=(2-1)= 1 (as i<e)
 // which means the loop has to go from i=2 to i=1 which is not possible as i is increasing after every iteration.

 // Continue command - Just as the break command is used to break the loop if condition is met, the continue command 
 // is used to skip the round or term of loop if the condition is met. the use of continue is shown through two 
 // examples below, one without continue and one with it.
 printf("\nex (without continue)- printing all odd numbers from 1 to 100 \n");
 for (int i=1; i<=100; i++){
    if (i%2!=0){
        printf("%d ",i);
    } 
 }
  printf("\nex (with continue)- printing all odd numbers from 1 to 100 \n");
 for (int i=1; i<=100; i++){
    if (i%2==0){
        continue; // here when the condition inside if is met, that is whenever i is divisible by 2, that
                  // particular term or round of loop is skipped. for example when i==1 the condition  
                  // inside if is not met and the if command is ignored and the code simply reads the next 
                  // printf line and implements it. then the value of i changes to 2. when i==2 the condition is
                  // met and the round of loop is skipped because of the continue command and the value of i 
                  // changes to 3 and the loop goes on and on and on.   
    } 
    printf("%d ",i);
 }
 






 





    return 0;
}
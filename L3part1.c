#include <stdio.h>
int main(){
 /* Lets say that we have to print the line 'i am human' 5 times. one way to do this would be to use printf 
 command(s) and write the given phrase inside it 5 times for it to print. this may work for the small 
 repetitions but if we have to write something many times or if we have to continue a cycle (ex- if we 
 have to write natural numbers upto 100) or things like that then we cannot make do with the use of printf 
 command, efficiently. at such times we use loops.  */

//FOR loops-
  printf("printing 'i am human' 10 times using for loop:\n");
  for (int i=1; i<=10 ; i=i+1){
    printf("i am human\n");
  }

/*here we used 'for' loop. in for we use small bracket and curly bracket just like if command. in samll 
 bracket we write initialization, in above example 'int i=1' was the initialization, there we introduced  
 a new variable i which is an integer data type and equal to 1. then we give a semi colon and write the 
 condition or the limit which determines the highest value i can go upto in this particular loop.
 in above example the highest value i can go to is 10. again we give a semicolon and then write the 
 increment or the updation which determines how the introduced variable changes after every loop.
 in above example the increment was +1 which means that after every loop the integer i increased by one.*/
 
/* how the above loop works- first of all the code is read and a place for an integer data type variable 
 i is formed and the value i is assigned is set as 1. then the condition is read and it is checked if the
 value of i lies inside the permissible range according to that condition, if it does not the the loop 
 ends there and the code in curly bracket is not implemented but if the value of i is inside the permissible 
 range then the code inside the curly braces are implemented. after that the increment is read and value of i
  changes according to it, here the value of i is raised by one. once the increment is done the value of i is 
  again checked against the condition and if the value of i does not lie inside the permissible range then the 
  code inside the curly bracket ends there, otherwise the code is implemented and the increment is made 
  and so the loops continues untill the value of i goes over the permissible range.  */

// Note- while writing increment/updation, we can also write 'i++' instead of 'i=i+1' for the same result.

// examples on how we use for loop--->

 printf("\nex 1- printing natural numbers from 1 to 100 with single space between them:\n");
 for ( int i=1; i<=100; i++ ){    // we can use the same variable for/inside different for commands but we will
    printf("%d ",i);              // have to re-introduce(declare) them again or the code won't work.
 }

 printf("\nex 2- printing even numbers from 1 to 100 with single space between them:\n");
 for (int i=1; i<=100; i++){
    if (i%2==0){
        printf("%d ",i);
    } 
 }
 printf("\nex 2-method 2- printing even numbers from 1 to 100 with single space between them:\n");
 for (int i=2; i<=100; i=i+2){
    printf("%d ",i);
 }


 printf("\nex 2- printing odd numbers from 1 to 50 with each number in one line:\n");
 for (int i=1; i<=50; i++){
    if (i%2!=0){
        printf("%d\n",i);
    } 
 }
 printf("\nex 2 -method 2- printing odd numbers from 1 to 50 with each number in one line:\n");
 for (int i=1; i<=50; i=i+2){
    printf("%d\n",i);
 }  

 printf("\nex 3 - printing the table of 19:\n");
 for (int i=19; i<=190; i=i+19){
    printf("%d\n",i);
 }

 printf("ex 4 - printing a table of n where n is a number inputted into the program:\n");
 int n;
 printf("Enter a number:"); scanf("%d",&n);
 for ( int i=n; i<=n*10; i=i+n){
    printf("%d\n",i);
 }

 printf("ex 5 - displaying the A.P:1,3,5,7... upto m terms where m is inputted by the user:\n");
 int m;
 printf("Enter the required number of terms of the A.P:"); scanf("%d",&m);
 for (int i=1; i<=(2*m-1); i=i+2){   // here last term will be (2*m-1) and increment = common diff.= 2 .
    printf("%d ",i);
 }

 printf("\nex 6 - displaying the A.P: 4,7,10,13,16... upto N terms where N is inputted by the user:\n");
 int N;
 printf("\nEnter the number of terms of the A.P.:\n"); 
 scanf("%d",&N);
 for (int i=4; i<=3*N+1; i=i+3 ){ // limit = Nth term of A.P= a+(N-1)*d= 4+(N-1)*3= 3*N+1.
   printf("%d ",i);
 }
 printf("\nex 6 (method 2 - without using formula of nth term of A.P.) - displaying the A.P: 4,7,10,13,16...");
 printf(" upto t terms where t is inputted by the user:\n");
 int t;
 printf("\nEnter the number of terms of the A.P.:");
 scanf("%d",&t);
 int T=4;
 for (int i=1; i<=t ; i++){
   printf("%d ",T);   // this causes T(=4) to print upto t times.
   T=T+3;     // now the value of t changes after every loop by an increment of 3 which we needed for our A.P.
 }

 








    return 0;
}
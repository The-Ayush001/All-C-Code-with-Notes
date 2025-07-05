#include <stdio.h>
int main(){

/* While loop- this loop is used mostly when we do not have much information about the initialization of  
 variables or about the conditions related to the loop or when we are having some problem with writing code
 in the for loop. 
 format of while loop : 
 int i=0;                  In this loop the initialization is done before writing actually using while loop.
 while(i<10){              the condition is put inside small brackets after while just like for loop.
    [THE CODE]             then the code that is to be implemented is written inside curly bracket.
    i++;                   lastly the increment is written, also inside the curly bracket of while.
 }
*/
 printf("ex - printing all the odd numbers from 1 to 100 using while loop:\n");
 int i=1;
 while (i<=100){
    printf("%d ",i);
    i=i+2;
 }

 /* Note : infinte loops - if while using loops, be it for or while, we write a code that never stops 
 possibly due to written updation/increment then that results is something we call infinite loop 
 as such loops never stop and keep going untill the code is forcibly stopped by the user.
 two examples of infinite loop are the codes given below -
 example 1-
 int i=1;
 while (i<100){
    printf("%d ",i);
    i=i-1; 
 }                
 here, i starts from 1 and is decreased by one after every loop so i will always remain smaller than 100
 so the condition inside while will always be true and code will always work without stopping, forming
 an infinite loop.

 example 2-
 for ( int i=1; i>0; i++ ){    
    printf("%d ",i);              
 }
 here, i starts form 1 and condition for the loop is i is greater than 0 which will always be true as i
 is increased by one after every loop and thus an infinite loop will be created.

 example 3-
 while ('a'<'b') printf("infinite loop");
 here 'a' and 'b' are used as characters so their ascii values will be compared. the ascii value of 'a' is
 97 and that of 'b' is 98 so 'a'<'b' is always true since there is no increment/decrement given in the code.
 and hence an infinite loop will be formed.
 note that if we write this code without putting a and b in inverted commas then the code won't work as 
 a and b will be deemed undeclared.

 problem 1 - predict the outcome -
 int a=10;
 while (a=20)         here a will be assigned the value of 20. 
    printf("%d",a);   the while code will work for the same reason that the if code works in "L2part5.c" .
                    there is no ending remark or updation for code so the result will be infinite loop of 20s.
*/

/* Increment and Decrement Operators:
Following types of increment and decrement operators are found in the C language: (a is some variable)
Prefix Increment operator (++a means a=a+1)
Postfix Increment operator (a++ means a=a+1)
Prefix Decrement operator (--a means a=a-1)
Postfix Decrement operator (a-- means a=a-1)

The prefix increment operator increments the current value of the available variable immediately, 
and only then this value is used in an expression. In simpler words, the value of a variable first
gets incremented and then used inside any expression in the case of an increment operation.
For example:
b = ++a;
In this case, the current value of a will be incremented first by 1. Then the new value will be 
assigned to b for the expression in which it is used.

The postfix increment operator allows the usage of the current value of a variable in an expression 
and then increments its value by 1. In simpler words, the value of a variable is first used inside 
the provided expression, and then its value gets incremented by 1.
For example:
b = a++;
In this case, the current value of a is first assigned to b, and after that, a is incremented.

The prefix decrement operator and the postfix decrement operator have the same characterstics as their
increment counterparts.

Note that these operators can only be used with single variables and cannot be used with a constant or 
an expression so '++b;' will be valid but '++3;' and '++(a+b);' will be invalid.
some examples on increment and decrement operators are shown below:    */

 int x=4,y,z;
 y=--x;  // here x is first assigned the value x-1 = 4-1 = 3 and that value is then assigned to y. so x=y=3.
 z=x--;  // here z is assigned the current value of x and then x is decremented by 1. so z=3 and x=2.
 printf("\n%d %d %d",x,y,z);  // the output will be  '[new line] 2 3 3' .
 printf("\n");
 int x1=4,y1=3,z1;
 z1 = x1-- -y1; // here postfix is used so the older value of x1 will be used and so z1= x1-y1=4-3= 1.
                // now the value of x1 will be decremented by one. so x1=3,y1=3 and z1=1.
 printf("%d %d %d",x1,y1,z1);  // the output will be  '3 3 1' .
 printf("\n");
 
 int a=4,b=0;
 while (a>=0){    
   a--;  
   b++;
   if (a==b)
      continue;
   else
      printf("%d %d ",a,b);  // the output will be  '3 1 1 3 0 4 -1 5 ' .
 }

 printf("\n"); 

 int c=4,d=0;
 while (c>=0){    
   if (c==d)
      break;
   else printf("%d %d ",c,d);  // output - '4 0 3 1 ' .
   c--;  
   d++;
 }

/*Do-While loop -  it works just like while loop though its format is a bit different, however the characterstic
 of this loop is that it implements the code written inside it, at least once, even when the condition is false.
 however, whenever the condition is true, it works just like the while loop.
 typical format :

 [initialization];
 do {
 [code];
 [increment/updation];
 } while ([condition]);

 below are a couple of examples in which do-while loop is used -
*/

 // ex-1 -
 int e=10;
 do {
   printf("\nhey you, stop there! ");
   e++;
 } while (e<15);
 // this code works normally, just like the while command as the condition in while is true.

 // ex-2 -
 int f=10;
 do {
   printf("\n\nhey you, don't stop there! ");
   f++;
 } while (f<5);
 /* the condition in this code is false as f=10 is greater than 5 and as f is increasing by 1 after every loop 
 the condition will never be true. so if this was just the while loop the output will be null as the code 
 inside the command would not be implemented. but as this is do-while loop the code inside it will be 
 implemented once even if the condition is false.
 and hence the output will be - '[new line][new line]hey you, don't stop there! ' .   */

printf("\nproblem 1- write a code to tell the number of digits in the inputted integral number.\n");
 int count=0,g;
 printf("enter a number:");
 scanf("%d",&g);
 while(g!=0) {
   count++;
   g=g/10;
 }
 printf("the digit count of the entered number is %d\n",count);

printf("\nproblem 2 - write a code to tell the sum of digits of the entered number-\n");
 int h,j,sum=0 ;
 printf("enter the number:");
 scanf("%d",&h);
 while(h!=0){
   j=h%10;
   sum= sum+j;
   h=h/10;
 }
 printf("\nthe sum of digits of the entered number is %d",sum);

printf("\n\nproblem 3 - write a code to tell the sum of all the even digits in an inputted number\n");
 int k,l,sm=0;
 printf("enter the number:");
 scanf("%d",&k);
 while (k!=0){
   l=k%10;
   if (l%2==0) sm=sm+l;
   k=k/10;
 }
 printf("the sum of all the even digits in the entered number is %d",sm);

printf("\n\nproblem 4 - write a code to tell the sum of all the odd digits in an inputted number\n");
 int p,q,summ=0;
 printf("enter the number:");
 scanf("%d",&p);
 while (p!=0){
   q=p%10;
   if (q%2!=0) summ=summ+q;
   p=p/10;
 }
 printf("the sum of all the odd digits in the entered number is %d",summ);

printf("\n\nproblem 5 - write a program to tell the reverse of the inputted number:\n");
 int r,ld,rvrse=0;
 printf("enter the number:");
 scanf("%d",&r);
 while (r!=0){
  ld=r%10;
  rvrse=rvrse*10+ld;
  r=r/10;
 }
 printf("the reverse of the entered number is %d",rvrse);

printf("\n\nproblem 6 - write a program to print the sum and reverse of the inputted number:");
 int s,lad,add=0,rev=0;
 printf("enter the number:");
 scanf("%d",&s);
 while (s!=0){
  lad=s%10;
  add=add+lad;
  rev=rev*10+lad;
  s=s/10;
 }
 printf("the sum of digits of the entered number is %d\n",add);
 printf("the reverse of the entered number is %d\n",rev);

















    return 0;
}
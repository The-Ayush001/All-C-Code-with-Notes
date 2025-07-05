#include <stdio.h>
int main(){

printf("problem 1 (using for loop)- write a program to print the sum of the series : 1-2+3-4+5-6....  upto ");
printf("n terms where n is inputted by user\n");
 int n,sum=0;
 printf("enter the total number of terms of the series: ");
 scanf("%d",&n);
 for (int i=1; i<=n; i++){
  if(i%2!=0) sum = sum+i;
  else sum = sum-i;
 }
 printf("the sum of the given series upto %d terms is %d\n",n,sum);

printf("problem 1 (using while loop)- write a program to print the sum of the series : 1-2+3-4+5-6....  upto ");
printf("n terms where n is inputted by user\n");
 int ia=1,numm,summm=0;
 printf("enter the total number of terms of the series: ");
 scanf("%d",&numm);
 while (ia<=numm) {
  if(ia%2!=0) summm = summm+ia;
  else summm = summm-ia;
  ia++;
 }
 printf("the sum of the given series upto %d terms is %d\n",numm,summm);

/*in above two methods of writing a program we succeed in making the program but such codes are taxing on 
 computers when inputted number is very large as the computer will have to calculate for all the iterations
 /terms in the loop. as such we are better off using a method in which the computer has to bear only the 
 minimal burden. for this problem such a method is using mathematics as shown below - */

printf("problem 1 (without using loops)- write a program to print the sum of the series : 1-2+3-4+5-6.... ");
printf("upto n terms where n is inputted by user\n");
 int input,summation=0;
 printf("enter the total number of terms: ");
 scanf("%d",&input);
 if (input%2==0) summation = -(input/2);
 //lets consider input = 6 then sumamtion = 1-2+3-4+5-6=(1-2)+(3-4)+(5-6)=(-1)+(-1)+(-1)=(-1)*3=(-1)*(input/2).
 // similarly the answer of the summation will always be (-1)*(input/2) for any even number of terms.
 else if( input%2!=0) summation = (input+1)/2;
 // lets consider input=7 then sumamtion = 1-2+3-4+5-6+7 = (1-2)+(3-4)+(5-6)+7 = (-1)+(-1)+(-1)+7=(-1)*3+7
 // =(-1)*(input-1)/2 + input = (input+1)/2 .
 printf("the required sum is %d",summation);


printf("\n\nproblem 2 (the overthinker's method)- write a program to print the factorial of an inputted number.\n");
 int a,b=1;
 printf("enter the number whose factorial is required: ");
 scanf("%d",&a);
 while (a>1){
  b=b*a*(a-1);
  a=a-2;          // although this code is not wrong it is too complicated and inefficient...
 }
 printf("the factorial of the entered number is %d",b);

 printf("\n\nproblem 2 (the actual method)- write a program to print the factorial of an inputted number.\n");
 int aa,product=1;
 printf("enter the number whose factorial is required: ");
 scanf("%d",&aa);
 for (int i=1;i<=aa; i++){
  product= product*i;
 }
 printf("the factorial of the entered number is %d",product);

 printf("\n\nproblem 3 - write a program to print the factorial of first m natural numbers.\n");
 int m,facto=1;
 printf("enter the number up until which the factorial is required: ");
 scanf("%d",&m);
 printf("\nthe factorials of first %d natural numbers are:\n ",m);
 for (int i=1;i<=m; i++){
  facto= facto*i;
  printf("%d  ",facto);
 }

printf("\n\nproblem 4 - write a program to tell the inputted term of the fibonacci sequence.\n");

/*In mathematics, the Fibonacci sequence is a sequence in which each number is the sum of the two preceding
 ones. Numbers that are part of the Fibonacci sequence are known as Fibonacci numbers, commonly denoted by Fn.
 The sequence commonly starts from 0 and 1, although some authors start the sequence from 1 and 1 or
 sometimes (as did Fibonacci) from 1 and 2. Starting from 0 and 1, the sequence begins -
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .... and so on.*/

 int c,frstrm=0,sndtrm=1,addi;
 printf("enter the required number of term of the fibonacci sequence:");
 scanf("%d",&c);
 for(int i=1; i<c; i++){
    addi=frstrm+sndtrm;
    frstrm=sndtrm;
    sndtrm=addi;
 }
 printf("the value of the required number of term of this sequence is %d",frstrm);

 printf("\n\nproblem 5 - write a program to print the first N fibonacci numbers where N is inputted by user\n");
 int N,e=0,f=1,smn;
 printf("enter the required numbers of terms of the sequence\n");
 scanf("%d",&N);
 printf("the fibonacci sequence upto %d terms is--\n0 ",N);
 for(int i=1; i<N; i++){
    smn= e+f;
    e=f;
    f=smn;
    printf("%d ",e);
 }

printf("problem 6- two numbers are entered through the keyboard. write a program to find out the value \n");
printf("of first number raised to the power of second.\n");
 int bs,exp,ans=1;
 printf("enter the base:"); scanf("%d",&bs);
 printf("enter the exponent:"); scanf("%d",&exp);
 for (int i=1; i<=exp; i++){
   ans=ans*bs;
 }
 printf("%d raised to the power of %d is %d",bs,exp,ans);

/*Typecasting (basics only)- Typecasting in C is the process of converting one data type to another data type 
by the programmer using the casting operator during program design. example of typecasting-
 int a12=15,b12=2;
 float c12;
 c12=a12/b12;
 printf("\n%f",c12);
 here the output wil be 7.000000 but it is incorrect answer as 7.500000 should be correct answer.
 we get the wrong answer as both a12 and b12 are int data type and so a12/b12 will also be int data type.
 then as that data is assinged float data type that data will now be converted then into float which makes the 
 answer incorrect. to get the right answer we use typecasting as shown below- 

 int a22=15,b22=2;
 float c22;
 c22=(float)a22/b22;
 printf("\n%f",c22);
 here we already typecasted or assigned that the value of a22/b22 should be float so the numbers a22 and b22 
 will first be converted into float and then only they will be divided which will give us the correct output
 which is 7.500000.

other uses of typecasting is shown below-
 int chrac=77;
 printf("%d--",chrac);   here, the terminal will simply print the number 77 as it is.
 char ch= (char)chrac;
 printf("%c",ch);       here, the terminal will first turn the chrac variable into char data type 
 and then it will print that which will give us the character whose ASCII value is 77 which is M.

 char cha='N';
 printf("%c--",cha);   
 int val=(int)cha;
 printf("%d",val);   final output - 'N--78' . 
 */

printf("\n\nproblem 7 - write a program to print all the ASCII values and their equivalent characters ");
printf("of all the 26 uppercase characters of the english alphabets using a loop.\n");

 for (int i=65; i<=90;i++){ // here intitializing value is 65 as the variable corresponding to that value is A.
                            // and limit is 90 as ASCII value of Z is 90.
   char charact=(char)i;
   printf("%c--> %d\n",charact,i);
 }
 

printf("\nproblem 8 -write a program to print out all the armstrong numbers between 1 and 500. a number that equals  ");
printf("the sum of its digits raised to the power of the number of digits is called an armstrong number. ");
printf("for example, 153 = 1*1*1 + 5*5*5 + 3*3*3 is an armstrong number.\n");

 int numb,summ,count1=1,r;
   while (count1<=500){
      numb=count1;
      summ=0;                      //THIS CODE MIGHT BE WRONG...I ONLY CHECKED FOR POWERS OF 3. NEEDS REVIEW !!!
      while (numb!=0){
         r=numb%10;
         summ=summ+r*r*r;
         numb=numb/10;
      }
      if (count1==summ){
         printf("%d is an Armstrong number.\n",count1);
      }
      count1++;
    }


// second method of solving the above problem:

//  int ld, sum, num;
//   for (int i=1; i<=500;i++){
//     num=i;
//     sum=0;
//     while(num!=0) {
//     ld=num%10;
//     sum= sum+ld*ld*ld;
//     num=num/10;
//     }
//     if (sum==i) printf("%d is an armstrong number.\n",i);
//     }










    return 0;
}
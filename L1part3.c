#include<stdio.h>
int main(){

   /* hierarchy of operators - the rule of BODMAS is followed here as well but when it comes
     to division or multiplication and additiion or substraction in the problem , we solve 
     whatever is on leftmost side first and then we continue to right . for ex- in 2*3/4 ,
     acc to bodmas we should first divide but here the programm will solve the product first as 
     it is on left and then it will move on to solve the division .
     note that in maths, solving either one of multi or div would give us the same ans 1.5 but 
     when it comes to programming the answer will change acc to our priority of solving.
     also keep in mind that in coding 3/4 will give the answer 0.00... and not 0.7something .
     similarly if we divide 6 by 4 we get 1.00... and not 1.5. this is the reason that our priority 
     of solving multi or div first will result in diff ans.*/ 

     float x1= 3/4;
     printf("\n%f",x1);

     float x2=6/4;
     printf("\n%f",x2);

    //  if we do want the ans of 3/4 to come out as 0.7something then we should put the ques as 3.0/4, 
    //  as shown below-
     float x11= 3.0/4;
     printf("\n%f",x11);
    
    printf("\nan example showing the hierarchy of operators-");
    int i= 2*3/4+4/4+8-2+5/8;
    printf("\n%d",i); 
    // this is solved like this - 2*3/4+4/4+8-2+5/8= 6/4+1+8-2+0=1+1+8-2+0=8 ans.

    /* char data type - it stores alphabets and special characters( ex-!@#$%^&*()_+{}|:"<>?/.,';][]abcdABCD etc )
     and is specified by %c and unlike int and float, to use char we have to put the value/data-to-be-stored
     in single inverted comma, for ex- 
     char hashtag='#';   here hashtag is variable name and # is the data stored in hashtag. */

    char ch='$';
    printf("\nthe dollar sign is %c\n",ch);

    /*ASCII values - In C programming, a character variable holds ASCII value (an integer
     number between 0 and 127) rather than that character itself. This integer value is
     the ASCII code of the character. For example, the ASCII value of 'A' is 65 and the 
     ASCII value of 'a' is 97. all of the other characters also have ASCII values. 
     some ex- ASCII value of A=65, ASCII value of B=66,C=67,D=68....a=97,b=98,c=99,d=100...etc.
     note that if we store data as char type but use %d insted of %c while using printf then 
     we get a number in terminal corresponding to the character stored, that value will be the
     character's ASCII value as shown below: */

    char cha='A';
    printf("the ASCII value of A is %d",cha);
    char charac='#';
    printf("\nthe ASCII value of # is %d",charac);
    // keep in mind that character constants are always single digits and as such, character 'Ab'
    // will not be valid character for char data type.

    /* short ,long and long long data types- just like int, these data types store integers but the range 
     of numbers they store differs. short data type can only store a total of 2 to the power 16 numbers.
     long as well as int can store upto 2 to the power 32 numbers while long long can store upto 2 to the 
     power 64 numbers.*/
 
    /*storage occupied by data types- all data types occupy some storage. if a data type takes n bits 
     then it can store a total of 2 to the power n numbers/things. (note that 1 byte = 8 bits).

     short occypies a total of 2 bytes that is 16 bits and so it can store a total of 2 to the power 16 
     numbers in it. range of short is -2^15 to (2^15 -1). (counting zero it makes 2^16 numbers.)  
 
     long and int occupy 4 bytes or 32 bits and so their range is numbers from -2^31to (2^31-1).
     (a total of 2^32 numbers)

     long long occupies 8 bytes or 64 bits and so its range is numbers from -2^63 to (2^63-1).
     (a total of 2^64 numbers)
     char data type only requires 1 byte or 8 bits as 2^8 (=256) different number of things are enough 
     for char since there are not that many characters (including alphabets, both lower and upper case
     and special characters.).*/

    short a = 32767;
    printf("\n%d",a);
    // max limit of short is 32767 so if we put a number bigger than that, we will get a different answer.
    short a1 = 32768;
    printf("\n%d",a1);
    short a2 = 32769;
    printf("\n%d",a2);
    /* once the number corsses 32767 it cycles back to -32768(the min limit) and starts increasing from there.
     if we put 32768 in short ans is -32768,if we put 32769 ans is -32767,if we put 32770 ans will be -32766
     and so on.*/
    long b=32768; 
    printf("\n%d",b);
    int c=32768;
    printf("\n%d",c);
 
    



  return 0;
}
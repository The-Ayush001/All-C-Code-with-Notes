#include <stdio.h>
 void sumone2n (int a, int s){             // recursive function for sum of 1 to n (using extra parameter).
    if (a==0){
        printf("%d\n",s);
        return ;
    } 
    sumone2n(a-1,s+a);
    return;
 }

 int power(int a, int b){             // recursive function for finding a raised to the power of b.
    if (b==0) return 1;
    int pow= a*power(a,b-1);
    return pow ;
 }
 int stairways12(int n){             // recursive function for finding the no. of ways one can go to nth stair
   if (n<=2) return n;               // from 0th stair or from ground,if he can climb 1 or 2 stairs at a time.
   return stairways12(n-1)+stairways12(n-2);
 }
   // for ex if n=4 then the person can climb the stairs in following faishon:
   // 1 1 1 1 , 1 1 2 , 1 2 1 , 2 1 1 , 2 2 .(these numbers represent the number of stairs he climbs at a time.)
   // so the total number of ways the person can climb upto 4th stair from ground is 5.


 int stairways123(int n){       // recursive function for finding the no. of ways one can go to nth stair
   if (n<=2) return n;          // from 0th stair or from ground,if he can climb 1 or 2 or 3 stairs at a time.
   if (n==3) return 4;
   return stairways123(n-1)+stairways123(n-2)+stairways123(n-3);
 }

// note that when power() function is used above a total of 'b' calls are made while calculating the answer
// of 'a' to the power of 'b'. the code can be made less taxing on the computer if we use another method for 
// finding powers which is called as logarithmic method.
//log method-2^8 =2^4 * 2^4 = 2^2*2^2 * 2^2*2^2 = 2^1*2^1*2^1*2^1 * 2^1*2^1*2^1*2^1 = 2*2*2*2 * 2*2*2*2.
// now this can be easily found out.

 int PowLogPrfctSqr(int a,int b){        // recursive function to find power of a number raised to another using 
  if (b==1) return a;                    // logarithmic method. this code is not fully correct as it does not give
  int c= PowLogPrfctSqr(a,b/2);         // the right answer whenever b does not belong to the g.p. 2,4,8,16,32...
  return c*c;
 }
 
 int powlog(int a, int b){        // this is the correct recursive function for finding value of a number raised to 
  if (b==0) return 1;              // the power of another number, using logarithmic method.
  //if(b==1) return a;     // this line is unnecessary as the above line will do the job. so we can comment it out.
  int c=powlog(a,b/2);
  if(b%2==0) return c*c;
  else return c*c*a;
 }




int main (){
    sumone2n(10,0);

    int aaaa= power(5,3);
    printf("%d\n",aaaa);

    printf("%d ",stairways12(4));
    printf("%d ",stairways12(5));
    printf("%d\n",stairways12(6));

    printf("%d ",stairways123(4));
    printf("%d ",stairways123(5));
    printf("%d\n",stairways123(6));

    printf("%d ",PowLogPrfctSqr(2,8));      //output - 256            
    printf("%d ",PowLogPrfctSqr(2,6));      //output - 16            incorrect
    printf("%d ",PowLogPrfctSqr(2,7));      //output - 16            incorrect
    printf("%d ",PowLogPrfctSqr(3,4));      //output - 81          
    printf("%d\n",PowLogPrfctSqr(3,3));      //output - 9            incorrect


    printf("%d ",powlog(2,5));
    printf("%d ",powlog(2,6));
    printf("%d ",powlog(2,7));
    printf("%d ",powlog(2,8));
    printf("%d ",powlog(3,3));
    printf("%d ",powlog(3,4));
    printf("%d ",powlog(5,3));
    printf("%d ",powlog(1,10));
    printf("%d ",powlog(0,9));
    printf("%d ",powlog(9,0));


    return 0;
    }
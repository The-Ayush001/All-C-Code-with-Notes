/*RECURSION is a very complex and time taking topic hence i will not be making notes of this topic as i did 
with other topics...if you have doubts or would like to revise recursion i suggest you go watch the lecture.*/

#include <stdio.h>

int factorial (int a){                 // recursive function for finding factorial.
    if (a<=1) return 1;
    int fact = a*factorial(a-1);
    return fact;
}

void decreasing(int a){               //resursive function for printing n to 1.
    if (a<1) return;
    printf("%d ",a);
    decreasing(a-1);
    return;
}

void increasing(int a,int b){           // recursive function for printing 1 to n using parameters.
    if (b<a) return;
    printf("%d ",a);
    increasing(a+1,b);
    return; 
}

//                          VERY IMPORTANT SHI...I MEAN THING...VERY IMPORTANT THING.

void increase2n(int a){    // recursion function for printing 1 to n without using parameters.
    if(a<1) return;        // i.e. printing 1 to n after recursive call.
    increase2n(a-1);
    printf("%d ",a);
    return;
}

void dec_inc(int a){               // recursive function for decreasing-increasing function.
    if (a<1) return;
    printf("%d ",a);
    dec_inc(a-1);
    printf("%d ",a);
    return;
} 


int main()            //      main function.
{
 int a=6,b=3,c,d;            // using factorial function.
 c=factorial(a);
 d= factorial(b);
 printf("%d %d\n\n",c,d);

 int aa=5,bb=17;       // using decreasing function.
 decreasing(aa);
 printf("\n");
 decreasing(bb);

 printf("\n\n");


 int cc=9,dd=21;       // using increasing function.
 increasing(1,cc);
 printf("\n");
 increasing(1,dd);

 printf("\n\n");
 increase2n(8);           // using increasing function (method 2).

 printf("\n\n");
 dec_inc(14);             // using dec_inc function.



    return 0;
}
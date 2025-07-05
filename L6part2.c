#include <stdio.h>


 int sum12n (int a){             // recursive function for sum of 1 to n (without using extra parameter).
    if (a<=1) return 1;
    int sum = a+sum12n(a-1);
    return sum; 
 }

 void sumone2n (int a, int s){             // recursive function for sum of 1 to n (using extra parameter).
    if (a==0){
        printf("%d\n",s);
        return ;
    } 
    sumone2n(a-1,s+a);
    return;
 }




 int main(){                          // main function.

    int ad=5;
    int an= sum12n(ad);          // calling recursive function for sum of 1 to n (mrthod 1).
    printf("%d\n",an);
    
    sumone2n(10,0);             // calling recursive function for sum of 1 to n (method 2).



    return 0;
 }


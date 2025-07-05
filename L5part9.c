#include <stdio.h>
int main(){

// swapping two numbers-
int a,b;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);

int c=a;
a=b;b=c;
printf("after swapping a = %d and b = %d\n",a,b);

// a way of swapping two numbers without introducing two variables -

 int d,e;
printf("enter d:");
scanf("%d",&d);
printf("enter e:");
scanf("%d",&e);
d=d+e;              //  we should always
e=d-e;              //                 remember these
d=d-e;              //                              3 lines.
printf("after swapping a = %d and b = %d\n",d,e);






    return 0;
}
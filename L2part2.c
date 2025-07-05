#include<stdio.h>
int main(){
    /* && and || - when we have only one condition for an if statement we can easily write a program as done
    in previous c file but if we have to write multiple conditions then we use '&&' (read as "and-and" stands 
    for and) and '||'(read as "or-or" stands for or.). we use these commands as shown below-  */
    //also keep in mind that && is always prioritised over || when written inside if.

    printf("ex 1 - a program to tell if the number inputted is three digit number or not: \n");

    int a; printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>99 && a<1000){          //here the condition is that 'a' is greater that 99 and 'a' is smaller than 1000.
       printf("the entered number is a 3 digit number.");
    }   
    else{printf("the entered number is not a 3 digit number.");
    }

    printf("\nex 2- program to tell if a positive integer input is divisible by both 3 and 8 or not:\n");

    int b;printf("Enter a number:");
    scanf("%d",&b);
    if(b%5==0 && b%8==0 && a>0){  
        printf("\nthe entered number is a positive integer divisible by both 5 and 8.\n");
    }
    else{
        printf("\nthe entered number is not a positive integer divisible by both 5 and 8.\n");
    }
     
    printf("\nex 3- program to tell if a positive integer input is divisible by 3 or 8 or not:\n");

    int c; printf("Enter a number:");
    scanf("%d",&c);
    if((c%5==0 || c%8==0) && c>0){   // here we have to put the conditions with 'or' between them in bracket 
                                     //otherwise our code would be wrong as && is always prioritised over ||. 
        printf("\nthe entered number is a positive integer divisible by 5 or 8.\n");
    }
    else{
        printf("\nthe entered number is not a positive integer divisible by 5 or 8.\n");
    }

    printf("ex 4- a program to determine the greatest of three distinct inputted numbers:\n");

    float p,q,r;
    printf("enter first number:"); scanf("%f",&p);
    printf("\nenter second number:"); scanf("%f",&q);
    printf("\nenter third number:"); scanf("%f",&r);
    if(p>q && p>r){
        printf("%f is greater than %f and %f.",p,q,r);
    }
        if(q>p && q>r){
        printf("%f is greater than %f and %f.",q,p,r);
    }
        if(r>p && r>q ){
        printf("%f is greater than %f and %f.",r,p,q);
    }

    printf("ex 4- a program to determine the greatest of four distinct inputted numbers:\n");

    float aa,bb,cc,dd;
    printf("enter the first number:\n"); scanf("%f",&aa);
    printf("enter the second number:\n"); scanf("%f",&bb);
    printf("enter the third number:\n"); scanf("%f",&cc);
    printf("enter the fourth number:\n"); scanf("%f",&dd);
    if(aa>bb && aa>cc && aa>dd){
        printf("first number is the greatest.\n");
    }
    if(bb>aa && bb>cc && bb>dd){
        printf("second number is the greatest.\n");
    }
    if(cc>bb && cc>aa && cc>dd){
        printf("third number is the greatest.\n");
    }
    if(dd>bb && dd>cc && dd>aa){
        printf("fourth number is the greatest.\n");
    }

  printf("ex 5- program to determine if the numbers input can be the sides of a triangle.\n");
    float e,f,g;
    printf("enter first side:\n"); scanf("%f",&e);
    printf("enter second side:\n"); scanf("%f",&f);
    printf("enter third side:\n"); scanf("%f",&g);
    if(e<f+g && f<e+g && g<e+f && (e>0 && f>0 && g>0)){
        printf("a triangle is possible with these sides.");
    }
    else{
        printf("a triangle is not possible with these sides.");
    }








    return 0;
}
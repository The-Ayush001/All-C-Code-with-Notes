#include<stdio.h>
int main(){

  // NESTED IF-ELSE - when we put one or more ifs and elses inside an if, it is called nested if-else.
  // In nested if else we try not to use && and || too much and make do by forming a nest of ifs and elses.

    printf("ex 1- take integer number as input and tell if it is divisible by 5 and 8.\n");

    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%5==0){
        if(a%8==0){ 
            printf(" the number is divided by both 5 and 8");
        }
        else{
            printf(" the number is not divided by both 5 and 8");
        }
    }
    else{
        printf(" the number is not divided by both 5 and 8");
    }

    printf("\nex 2- take an integer input and tell if it is divisible by 5 or 3 but not by 15.\n");

    int b;
    printf("enter the number:");
    scanf("%d",&b);
    if(b%5==0 || b%3==0){
        if(b%15!=0){
            printf("the number is divisible by 3 or 5 but not by 15.");
        }
        else{
            printf("the number is divisible by 3 or 5 but also by 15.");
        }
    }    
    else{
       printf("the number is not divisible by 5 or 3.");  
    }

    printf("\nex 3- take 3 integer inputs and print the greatest of them:\n");

    int c,d,e;
    printf("enter first integer:"); scanf("%d",&c);
    printf("enter second integer:"); scanf("%d",&d);
    printf("enter third integer:"); scanf("%d",&e);
    if(c>d){
        if(c>e){
            printf("%d is greatest.",c);
        }
        else{
            printf("%d is greatest.",e);
        }
    }
    if(d>c){
                if(d>e){
            printf("%d is greatest.",d);
        }
        else{
            printf("%d is greatest.",e);
        }
    }

  printf("\nex 4- take input percentage of students and print their grades according to given standard:\n");
    printf("more than 80 - A grade.\n");printf("more than 60 - B grade.\n");printf("more than 40 - C grade.\n");
    printf("40 or less - D grade.\n");
    float aa;
    printf("enter the mark percentage:"); scanf("%f",&aa);
    if(aa>40){
        if(aa>60){
            if(aa>80){
                printf("A grade");
            }
            
            else{
                printf("B grade");
            }
        }
        else{
            printf("C grade");
        }
    }
    else{
        printf("D grade");
    }


    return 0;
}
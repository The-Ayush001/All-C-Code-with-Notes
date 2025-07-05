# include<stdio.h>
int main(){
   /* variable naming rules -
    1. variable name starts with underscore or alphabet.
    2. special charecters except underscore are not allowed in variable names.
    3. some particular keywords like int, float, if, else, char etc are not allowed.
    4. commas and blanks are not allowed. 
    Note that, while "float" can not be a variable name, "FLOAT" or "Float" or "float1" or "_float" etc can be
    variable names. */
     
    /*scanf("") is counterpart of printf("") and is used for inputing info not in the codes but 
    directly in the program at the time of need. meanwhile printf is used to lock in an output 
    in the code which will show in the program as unchangable.*/

    // calculating are of a circle without using scanf-
     printf("\n\ncalculating area of a circle\n");
    float r=7.4; printf("radius is %f\n",r);
    float pi=3.1415;
    float ar=pi*r*r;
    printf("area of the circle = %f\n\n",ar); 
    //here the program will take value of "r" to be 7.4 and give the answer in terminal.


    //using scanf-
    printf("\n\ncalculating area of a circle\n");
    float radius; printf("enter radius=");
    scanf("%f",&radius);
    float pie=3.1415;
    float area=pie*radius*radius;
    printf("area of the circle = %f\n\n",area);
    /*here the program will wait for the value of "radius" to be entered directly into the terminal 
    and give the answer only once the value is entered in the teminal and we press enter.*/


   // writing a program to find simple intrest by inputing the info directly into terminal.
    float p,rt,t;
    printf("enter principle="); scanf("%f",&p);
    printf("enter rate="); scanf("%f",&rt);
    printf("enter time="); scanf("%f",&t);
    float si=(p*rt*t)/100;
    printf("the simple intrest is =%f",si);

 printf("\n\nTake two integer inputs and b where a>b and find the remainder when a is divided by b:\n Program:");
    int a,b;
    printf("enter value of a="); scanf("%d",&a);
    printf("enter value of b="); scanf("%d",&b);
    
    int q= a/b;
    int rem=a-(b*q);
    printf("when %d is divided by %d then the remainder left is %d \n\n",a,b,rem);


   /*   +,-,*,/  are 4 operators used in c along with a fifth one called modulo operator symbolised
    by % (percentage sign). if a and b are two numbers then a % b read as "a modulo b" gives
    us the remainder when a is divided by b. for example- 17 % 5 = 2 as when 17 is divided by
    5 the remainder left is 2.
    Note that, in a % b if 'a' is smaller than 'b' (that is if the dividend is smaller than the divisor) 
    then the answer will be the number/dividend itself. for example- 5 % 17 = 5.  */   

// Another way of writing the code for the last problem. - //
    printf("\n\nTake two integer inputs and b where a>b and find the remainder when a is divided by b:\n Program:");
    int aa,bb;
    printf("enter value of a="); scanf("%d",&aa);
    printf("enter value of b="); scanf("%d",&bb);
    
    int remn= aa%bb;
    printf("when %d is divided by %d then the remainder left is %d",a,b,remn);
    
    //note that 2%8 = 2%-8 = 2. although -2%8 = -2%-8 =-2. which means we ignore the minus sign of a 
    //number if it is directly after modulo sign.
    int x1=2%8;
    printf("\n%d",x1);
    int x2=2%-8;
    printf("\n%d",x2);
    int x3=-2%8;
    printf("\n%d",x3);
    int x4=-2%-8;
    printf("\n%d",x4);
    
    
    
    return 0;
} 

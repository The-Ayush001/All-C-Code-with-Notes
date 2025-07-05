# include<stdio.h>
int main(){
printf("Let us start");
/* printf(""); to print , /n inside "" of printf for line break .
int,float,char are data types, int is for integer variables ,float is for real numbers and decimals,
char is for alphabet and special characters. %d,%f,%c are format specifiers for int float and character
 data types */
 printf("\n\n");
 printf("this is\nan example\nof line break.\n\n\n");
    
    int x=20;
    int y=6;
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    printf("sum = %d\n",x+y);
    printf("diff.= %d\n",x-y);
    printf("prod.= %d\n",x*y);
    printf("quo.= %d\n\n\n",x/y);  
    /* here the actual quotient is in decimal but the code will show the q to be 3 because 
    the code will be reading it as integer because %d is used to denote integer. to have the correct
    ans we need to use float format specifier that is %f insted of %d. we will also have to term both x and y
    as float instead of int */
    
    float a=20;
    float b=6;
    printf("a is %f\n",a);
    printf("b is %f\n",b);
    printf("sum = %f\n",a+b);
    printf("diff.= %f\n",a-b);
    printf("prod.= %f\n",a*b);
    printf("quo.= %f\n\n\n",a/b); 

    printf("Some problems\n\n\n");
    int radius=5;
    printf("radius is %d\n",radius);
    float volume=4*3.14*radius*radius*radius/3;
    printf("volume of the sphere = 4*pi*radius_cubed/3 = %f",volume);


    printf("\n\n\ncalculating percentage\n");
    float m1=93; printf("m1=%f\n",m1);
    float m2=85; printf("m2=%f\n",m2);
    float m3=91.5; printf("m3=%f\n",m3);
    float m4=78; printf("m4=%f\n",m4);
    float m5=89; printf("m5=%f\n",m5);  
    float p=(m1+m2+m3+m4+m5)/5;
    printf("percantage = %f",p);

    printf("\n\n\ncalculating percentage\n");            //this is compact form of the above code.
    float m11,m22,m33,m44,m55;
    m11=93; 
    m22=85; 
    m33=91.5; 
    m44=78;
    m55=89;  
    printf(" m11=%f\n m22=%f\n m33=%f\n m44=%f\n m55=%f\n",m11,m22,m33,m44,m55);
    float p1=(m11+m22+m33+m44+m55)/5;
    printf("percantage = %f",p1);



    printf("\n\ncalculating area of a circle\n");
    float rad=7.4; printf("radius is %f\n",rad);
    float pi=3.1415;
    float ar=pi*rad*rad;
    printf("area of the circle = %f\n\n",ar);

    printf("calculating simple intrest\n\n");
    int pr=15000; printf("principle=%d\n",pr);
    float rt=12.5; printf("rate=%f\n",rt);
    float tm=2.25; printf("time=%f\n",tm);
    float si=(pr*rt*tm)/100;
    printf("simple intrest is %f",si);
   
    




return 0;
}







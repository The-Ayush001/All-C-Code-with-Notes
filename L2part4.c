#include<stdio.h>
int main(){

/*ELSE IF - Just like we can use ifs and elses in if we can also use ifs and elses in an else command.
To shorten such code we use the 'else if' command. below are two methods of sloving same example 
(the ex-4 form L2part3.c),one is with ifs and elses in an else command and then the same thing
 is re-written/shortened using 'else if' command.*/
    printf("first method;\n");      // This method is shown here only to make sure that else if is
                                    // understood properly and it should not be used while actually 
                                    // programming as it is enefficient way to do so.
    float a;
    printf("enter the mark percentage:"); scanf("%f",&a);
    if(a<40){
        printf("D grade");
    }
    else{
        if(a<60){
            printf("C grade");
        }
    else{
        if(a<80){
            printf("B grade");
        }
    else{
        printf("A grade");
        }
        }
    }

    printf("\nsecond method;\n");
    float aa;
    printf("enter the mark percentage:"); scanf("%f",&aa);
    if(aa<40){
        printf("D grade");
    }
    else if (aa<60){
        printf("C grade");
    }
    else if(aa<80){
        printf("B grade");
    }
    else {
        printf("A grade");
    }

    printf("\nproblem 1- given3 points (x1,y1),(x2,y2),(x3,y3), write a program to check if all 3 points");
    printf("are on the same line.\n");
    float x1,x2,x3,y1,y2,y3;
    printf("enter x coordinate of first point:\n"); scanf("%f",&x1);
    printf("enter y coordinate of first point:\n"); scanf("%f",&y1);
    printf("enter x coordinate of second point:\n"); scanf("%f",&x2);
    printf("enter y coordinate of second point:\n"); scanf("%f",&y2);
    printf("enter x coordinate of third point:\n"); scanf("%f",&x3);
    printf("enter y coordinate of third point:\n"); scanf("%f",&y3);
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    if(m1==m2 || (x1==x2 && x2==x3 && y1==y2 && y2==y3)){
        printf("all 3 points are on the same line.");
    }
    else{
        printf("all 3 points are not on the same line.");
    }

    printf("\nproblem 2- given a point (x,y), find out if the point lies on x-axis, y-axix or on origin.\n");
    float x,y;
    printf("enter the coordinates:"); 
    scanf("%f %f",&x,&y);
    if (x==0 && y!=0){
        printf("point lies on y-axis.");
    }
    else if(y==0 && x!=0){
        printf("point lies on x-axis.");
    }
    else if (x==0 && y==0){
        printf("point lies on origin.");
    }
    else {
        printf("given point does not lie on x-axis, y-axis or origin.");
    }















    return 0;
}
# include <stdio.h>
int main(){

// 26. 

 printf("\nproblem 2- display the G.P. 100,50,25... upto n terms.\n");
 int n;
 float d=100;
 printf("enter the number of terms of the G.P.:");
 scanf("%d",&n);
 for (int i=1; i<=n; i++ ){
  printf("%f ",d);
  d=d/2;
 }

   // 01:01:17










    return 0;
}

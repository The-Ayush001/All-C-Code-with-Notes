#include <stdio.h>
int main (){

/*pattern printing - We can print different patterns like star patterns, pyramid patterns, Floyd’s triangle, 
Pascal’s triangle, etc. in C language. These problems generally require the knowledge of loops and if-else 
statements. some problems on pattern printing are given below- */

// 1. Star rectangle / solid rectangle-->

 printf("problem 1 - print the pattern written in comment below whose numbers of rows and columns ");
 printf("are determined by the user.");
 /*     ******
        ******
        ******
        ******
        ******
 */

 int a,b;
 printf("\nenter the number of rows: "); scanf("%d",&a);
 printf("\nenter the number of columns: "); scanf("%d",&b);
 for (int i=1; i<=a;i++){
    for (int i=1; i<=b; i++){
        printf("*");
    } 
    printf("\n");
 }

// 2. Star square / solid square -->
 printf("\nproblem 2 - print a square of stars where no. of stars in each row or column is inputted by user.");
 int a1;
 printf("\nenter the number of rows or columns:"); 
 scanf("%d",&a1);
 for (int i=1; i<=a1;i++){
    for (int i=1;i<=a1;i++) printf("*");
    printf("\n");
 }

// 3. Number square -->
 printf("problem 3 - print the following patternnwhere no. of rows or columns are inputted by user:");
 /*                   1 2 3 4 
                      1 2 3 4 
                      1 2 3 4 
                      1 2 3 4
 */
 printf("\nenter the number of rows or columns:");
 int a11; scanf("%d",&a11);
 for (int i=1; i<=a11; i++) {
    for (int j=1; j<=a11;j++ ) printf("%d ",j);
    printf("\n");
 }

// 4. Star triangle -->
 printf("\nproblem 4- print the given pattern in which the number of stars in first column is inputted by user-");
 /*        
              * 
              * *
              * * *
              * * * *
 */
 int a12; 
 printf("\nenter the number of rows of stars in the triangle:");
 scanf("%d",&a12);
 for (int i=1; i<=a12; i++){
    for (int j=1; j<=i; j++) 
        printf("* ");
    printf("\n");
 }

// 5. Star triangle inverted -->
 printf("\nproblem 5 - print the inverted star triangle as shown below and take number of rows as input");
 /*     
          * * * *
          * * *
          * *
          *
 */
 int a13;
 printf("\ninput the number of rows of the inverted star triangle:");
 scanf("%d",&a13);
 for (int i=1; i<=a13; i++) {
    for (int j=a13-(i-1); j>0; j--)
        printf("* ");
    printf("\n");
 }
// another method of solving the above problem in a less confusing way...
//  int a;
//  printf("enter the number of rows:");
//  scanf("%d",&a);
//  for(int i=1;i<=a;i++){
//     for(int j=a;j>=i;j--){
//         printf("* ");
//     }
//     printf("\n");
//  }


// 6. Number triangle -->
 printf("problem 6 - print the pattern given below where number of rows is inputted by user:");
 /*            1
               1 2
               1 2 3 
               1 2 3 4 
 */
 int a123;
 printf("\nenter the number of rows-");
 scanf("%d",&a123);
 for (int i=1; i<=a123; i++){
    for (int j=1; j<=i; j++) printf("%d ",j);
    printf("\n");
 }

// 7. Inverted number triangle -->

 printf("\nproblem 7 - print the pattern given below. take no. of rows as input by user-");
 /*         1 2 3 4 
            1 2 3 
            1 2
            1
 */


 int a14; 
 printf("\n enter the number of rows:");
 scanf("%d",&a14);
 for (int i=1; i<=a14; i++){
    for (int j=1; j<=a14-(i-1); j++)
       printf("%d ",j);
    printf("\n");
 }


// 8. Odd number triangle -->

 printf("\nproblem 8 - print the pattern given below:\n");
 /*            1 
               1 3 
               1 3 5 
               1 3 5 7
 */

 int a22;
 printf("enter the number of required rows:");
 scanf("%d",&a22);
 for (int i=1; i<=a22; i++){
   for (int j=1; j<i*2; j=j+2){
      printf("%d ",j);
   }
   printf("\n");
 }

 /* another way of printing the above code can be -
  int a22;
 printf("enter the number of required rows:");
 scanf("%d",&a22);
 for (int i=1; i<=a22; i++){
   int a=1;
   for (int j=1; j<=i; j++){
      printf("%d ",a);
      a=a+2;
   }
   printf("\n");
 }
 */



    return 0;
}
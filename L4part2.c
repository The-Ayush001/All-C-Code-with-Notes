# include <stdio.h>
int main (){

// 9. Alphabet square -->

 printf("\nproblem 9 - print the given pattern where the number of rows (and letters");
 printf(" in each row are inputted) by user\n");
 /*          A B C D
             A B C D 
             A B C D 
             A B C D
 */
 int a;
 printf("\nenter the number of required rows:");
 scanf("%d",&a);
 for (int i=1; i<=a; i++){
   for (int j=65;j<65+a;j++){
      if (j<=90) printf("%c ",(char)j);  // these two lines are to make sure that the code stops printing when
      else break;   // it reaches 'Z' otherwise the code would also print characters other than the uppercase alphabet.
   } 
   printf("\n");
 }
 
/*Second method of above problem (by introducing another variable)--

 int a;
 printf("enter the number of required rows:");
 scanf("%d",&a);
 for (int i=1; i<=a; i++){
    int b=1;
    for (int j=1; j<=a; j++) {
      char ch= (char) b+64;
      printf("%c ",ch);
      b++;
      }
      printf("\n");
 }              
 note - there is no break command used here so the code will print characters other than the alphabet when a>26.
 */

// 10. Alphabet triangle -->

 printf("\nproblem 10 -print the given pattern-\n");
 /*      A
         A B 
         A B C
         A B C D 
 */

 int a1;
 printf("enter the required number of rows: ");
 scanf("%d",&a1);
 for (int i=1; i<=a1; i++){
    for (int j=1; j<=i; j++) 
    printf("%c ",(char)j+64);
  printf("\n");
 }

// 11. Alphabet number triangle -->
 
 printf("\nproblem 11 - print the pattern given below -");
 /*       1
          A B 
          1 2 3 
          A B C D 
          1 2 3 4 5 
 */
 
 int c;
 printf("\nenter the required number of rows:");
 scanf("%d",&c);
 for (int i=1; i<=c; i++){
    for (int j=1; j<=i;j++){
      if (i%2!=0) printf("%d ",j);
      else printf("%c ",(char)j+64);
  }
  printf("\n");
 }

 
// 12. Star plus (plus made of stars) -->

 printf("\nproblem 12 - take total number of rows/columns as input by user and print the pattern given below:\n");
 /*                *
                   *
               * * * * *
                   *
                   *
 */

 int d;
 printf("enter the required no. of rows:");
 scanf("%d",&d);
 for (int i=1; i<=d; i++){
    if(d%2==0){
      printf("\nthe input cannot be even for a symmetrical plus.\n");
      break;
    } 
    for (int j=1; j<=d; j++){
      if ((1+d)/2 == j || (1+d)/2 == i) printf("* ");
      else printf("  ");     // here we give 2 spaces and not 1 as '* ' also take 2 spaces.
    }                     // if we only give 1 space then the output will not be symmetrical.
    printf("\n");
 }


// 13. Hollow rectangle -->

 printf("problem 13 - print the pattern given below. take no. of rows and columns as inputs-");
 /*         * * * * * * 
            *         * 
            *         *
            * * * * * *
 */

 int e,f;
 printf("\nenter the number of rows:");
 scanf("%d",&e);
 printf("\nenter the number of columns:");
 scanf("%d",&f);
 for (int i=1; i<=e; i++){
    for (int j=1; j<=f;j++){
      if (i==1 || j==1 || i==e || j==f) 
          printf("* ");
      else printf("  ");
    }
    printf("\n");
 }


// 14. Star cross -->

 printf("\nproblem 14 - print the pattern given below taking number of rows/columns as input-\n");
 /*                 *           *
                      *       *
                        *   *
                          *
                        *   *
                      *       *
                    *           *
 */
 int g;
 printf("enter the required number of rows/columns:");
 scanf("%d",&g);
 for (int i=1; i<=g; i++) {
    if (g%2==0){
      printf("\na star cross cannot be formed properly (with a star at midpoints of seemingly intersecting lines) ");
      printf("when g is even.\n");
      break;
    }
    for (int j=1; j<=g; j++) {
      if (i==j || i+j==g+1) printf("* ");
      else printf("  ");
    }

    printf("\n");
 }


// 15. Floyd's triangle -->

 printf("\nproblem 15 - print the given pattern -\n");
 /*           1 
              2 3 
              4 5 6 
              7 8 9 10
 */

 int h; 
 printf("\nenter the required number of rows/columns:");
 scanf("%d",&h);
 int k=1;
 for (int i=1; i<=h; i++){
    for (int j=1; j<=i; j++){
      printf("%d ",k);
      k++;
    }
    printf("\n");
 }


// 16. Odd number floyd's triangle -->

 printf("\nproblem 16 - print the pattern given below:\n");
 /*                   1 
                      3 5 
                      7 9 11 
                      13 15 17 19 
 */
 int l1,l2=1;
 printf("enter the required number of rows:");
 scanf("%d",&l1);
 for (int i=1; i<=l1; i++){
    for (int j=1; j<=i; j++) {
       printf("%d ",l2);
      l2=l2+2;
    }
    printf("\n");
 }


// 17. 0 and 1 triangle -->

 printf("problem 17 - print the pattern given below:\n");
/*                 1
                   0 1
                   1 0 1
                   0 1 0 1 
                   1 0 1 0 1
*/
 
 int m,n;
 printf("(first method) enter the required number of rows:");
 scanf("%d",&m);
 for (int i=1; i<=m; i++){
    if (i%2!=0) n=1;
    else n=0;
    for (int j=1; j<=i; j++){
       printf("%d ",n);
       if (n==0) n=1;
       else n=0;
   }
   printf("\n");
 }

 int m1;
 printf("\n(second method) enter the required number of rows:");
 scanf("%d",&m1);
 for (int i=1; i<=m1; i++){
   for (int j=1; j<=i; j++ ){
      if((i+j)%2==0) printf("1 ");
      else printf("0 ");
   }
   printf("\n");
 }
 






    return 0;
}
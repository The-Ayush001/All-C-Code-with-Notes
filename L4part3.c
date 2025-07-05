#include <stdio.h>
int main (){

// 18. Star triangle mirrored -->

 printf("problem 18 - print the pattern given below-\n");
 /*
                        *
                      * *
                    * * *
                  * * * *
                * * * * *
 */

 int a;
 printf("enter the required number of rows:");
 scanf("%d",&a);
 for (int i=1; i<=a; i++){
       for (int j=a-i; j>0; j--) 
          printf("  ");
       for (int k=1; k<=i; k++)
          printf("* ");
       printf("\n");
 }
 /* in the above problem the first loop is used to print the empty spaces in the shape of a star triangle 
 then second loop is used to add the rest of the part which is the stars and hence it makes up this pattern 
 which we needed. 
 if we are still having problem in understanding the question then we can imagine the 
 pattern to be printed as follows:
                  # # # # *
                  # # # * *
                  # # * * *
                  # * * * *
                  * * * * *
 now all we have to do is replace '#' with blank space.
 in essence all we have to do is to write two different loops inside the first loop. one loop will print 
 this pattern -   # # # #     and other loop will print this pattern -    *       
                  # # #                                                   * *
                  # #                                                     * * *
                  #                                                       * * * *
                                                                          * * * * *
 the second pattern will be printed just after the previous one, such that first line of second pattern is 
 written after first line of first and so on. then when we add these two patterns we end up with this -
                 # # # # *    
                 # # # * *         
                 # # * * *  
                 # * * * *   
                 * * * * * 
 and then finally we replace '#' with blank space and we are golden.  */

// 19. Star parallelogram -->

 printf("\nproblem 19 - print the pattern given below-\n");
 /*                        * * * * *
                         * * * * *
                       * * * * * 
                     * * * * *
 */
 int b,c;
 printf("\nenter the number of rows:");
 scanf("%d",&b);
 printf("\nenter the number of stars in each row:");
 scanf("%d",&c);
 for (int i=1; i<=b; i++ ){
      for (int j=b-i; j>0; j--) 
         printf("  ");
      for (int k=1; k<=c; k++)
         printf("* ");
      printf("\n");
 }

// 20. Alphabet triangle mirrored variant -->

 printf("\nprint the pattern given below.\n");
 /*               A
                A B 
              A B C 
            A B C D 
 */

 int d;
 printf("enter the required number of rows:");
 scanf("%d",&d);
 for (int i=1; i<=d; i++){
      for (int j=d-i; j>0; j--)
         printf("  ");
      for (int k=65; k<=i+64; k++)
         printf("%c ",(char)k);
      printf("\n");
 }


// 21. Star pyramid -->

 printf("\nproblem 21 - print the pattern given below-");
 /*              *
               * * *
             * * * * *
           * * * * * * *
 */
 
 int e;
 printf("\nenter the required number of rows:");
 scanf("%d",&e);
 for (int i=1; i<=e; i++){
       for (int j=e-i; j>0; j--)
          printf("  ");
       for (int k=1; k<2*i; k++)
          printf("* ");
       printf("\n");
 }


// 22. Number pyramid -->

 printf("print the given pattern-");
 /*                1
                 1 2 3
               1 2 3 4 5
             1 2 3 4 5 6 7
 */
 int f;
 printf("enter the required number of rows:");
 scanf("%d",&f);
 for (int i=1; i<=f; i++){
       for (int j=f-i; j>0; j--)
          printf("  ");
       for (int k=1; k<2*i; k++)  
          printf("%d ",k);
       printf("\n");
 }


// 23. Alphabet pyramid -->

 printf("\nproblem 24 - print the pattern given below-");
 /*                  A
                   A B C
                 A B C D E
               A B C D E F G
 */
 int l;
 printf("\nenter the required number of rows:");
 scanf("%d",&l);
 for (int i=1; i<=l; i++) {
       for (int j=l-i; j>0; j--)
          printf("  ");
       for (int k=65; k<65+(2*i-1); k++ ) 
          printf("%c ",(char)k);
       printf("\n");
 }

// 24. Number pyramid (symmetrical) -->

 printf("problem 24 - print the pattern given below-");
 /*                      1
                       1 2 1
                     1 2 3 2 1
                   1 2 3 4 3 2 1 
 */

 int m;
 printf("enter  the required number of rows:");
 scanf("%d",&m);
 for (int i=1; i<=m; i++){
      for (int j=m-i; j>0; j--)
          printf("  ");
      for (int k=1; k<=i; k++)
          printf("%d ",k);
      for (int l=i-1; l>0; l--)
          printf("%d ",l);
      printf("\n");
 }


// 25. Alphabet pyramid (symettrical) -->

 printf("\nproblem 25 - print the pattern given below-\n");
 /*                     A
                      A B A
                    A B C B A
                  A B C D C B A
                A B C D E D C B A
 */
 int n;
 printf("(method 1) enter the number of rows:");
 scanf("%d",&n);
 for (int i=1; i<=n; i++){
       for (int j=1; j<=n-i; j++)
          printf("  ");
       for (int k=65; k<=i+64; k++)
          printf("%c ",(char)k);
       for (int l=64+i-1; l>64; l--)
          printf("%c ",(char)l);
       printf("\n");
 }

//  int na;
//  printf("(method 2- introducing new variables) enter the number of rows:");
//  scanf("%d",&na);




   return 0;
}
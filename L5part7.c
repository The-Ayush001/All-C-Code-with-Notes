#include <stdio.h>

/*
printing pascal's triangle -->
                                      1
                                    1   1
                                  1   2   1
                                1   3   3   1
                              1   4   6   4   1
                            1   5   10  10   5   1
                          1   6  15   20   15  6   1

pascal's triangle is basically a triangle in which the sum of two numbers is written below
in between the elements a little below it. for ex- in 2nd row we did 1+1 so we got 2 below those one.

                        1
                        1   1
                        1   2   1
                        1   3   3   1
                        1   4   6   4   1
                        1   5   10   10   5   1
                        1   6   15   20   15   6   1

when arranged as a right angled triangle, it becomes a triangle in which the number of row where an
element is tells us the 'n' and number of column tells us the 'r' of nCr .note that the number of rows
and columns is assumed to be started from 0. for example, the 1 at the top in the
triangle is in oth row and oth column so the number should be 1C1 which is 1. the element 20 for ex is in 7th
row and 4th column so it should be equal to 6C3 which is actually 20.

now to write the code for pascal's triangle we will use functions. and we will first make the right triangle as
shown above then we will convert it into the actual pyramid shaped pascal's triangle using loops.
*/

int combination(int n, int r)
{

  int nfact = 1, comb;
  for (int i = 2; i <= n; i++)
  {
    nfact = nfact * i;
  }
  int rfact = 1;
  for (int i = 2; i <= r; i++)
  {
    rfact = rfact * i;
  }
  int nrfact = 1;
  for (int i = 2; i <= n - r; i++)
  {
    nrfact = nrfact * i;
  }

  return nfact / (rfact * nrfact);
}

int main()
{
  int n, comb;
  printf("enter the number of rows of pascal's triangle you want to print: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf("  ");
    }
    for (int j = 0; j <= i; j++)
    {
      comb = combination(i, j);
      printf(" %d ", comb);
    }
    printf("\n");
  }
 // this process is helpful in writing a code which takes less time and space. however this method still
 // takes a lot of toll on the computer so we should use another method to print the pasacl's triangle, which 
 // is compact yet doesn't take much toll on the computer. that method is using math and is shown in next c file.





  /* writing a program to find the permutation of numbers n and r using functions -
  #include <stdio.h>


  int permutation(int n, int r ){
   int factn=1,factnr=1;
   for(int i=2; i<=n; i++){
      factn=factn*i;
   }
    for(int i=2; i<=n-r; i++){
      factnr=factnr*i;
   }

   return factn/factnr;


  }
  int main(){

   int a=5,b=3,c,d;
   int abp= permutation(a,b);
   printf("%d",abp);


   printf("\nenter n:");
   scanf("%d",&c);

   printf("enter r:");
   scanf("%d",&d);

   int cdp=permutation(c,d);
   printf("%d",cdp);


    return 0;
  }




   */

  return 0;
}
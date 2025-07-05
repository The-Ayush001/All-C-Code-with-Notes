#include <stdio.h>
/* the pascal's triangle can be written in terms of nCr as follows-
                     0C0  
              
                  1C0  1C1  
              
                2C0  2C1  2C2
             
             3C0  3C1  3C2  3C3  
              
          4C0  4C1   4C2  4C3  4C4

 when written without initial spaces it can be shown as-
              0C0                                      0C0 
                 
              1C0  1C1                                 1C0   1C(0+1)  
              
              2C0  2C1  2C2                 OR         2C0   2C(0+1)  2C(1+1)
             
              3C0  3C1  3C2  3C3                       3C0   3C(0+1)  3C(1+1)  3C(2+1)
              
              4C0  4C1  4C2  4C3  4C4                  4C0   4C(0+1)  3C(1+1)  4C(2+1)  4C(3+1)

we also know that nC(r+1)= nCr*((n-r)/(r+1)). so to print pascal's triangle all we have to do is print 1 
as the first element in every row(and 0th column) and then we can use this value to find the rest 
of the elements of every row by multiplying it by ((n-r)/(r+1)).
               
*/



int main(){
    int n;
    printf("enter number of required rows of pascal's triangle:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int k=1;k<=n-i;k++) printf("  ");
        int first=1;
        for (int j=0; j<=i;j++){
            printf("  %d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }




    return 0;
}
   
 

#include <stdio.h>
#include <math.h>
/*now let us say that we have to find combinations of various numbers multiple times where n and c of ncr is
inputted by the user directly in the terminal. to do that we can write a code for finding the factorials or 
the combinations every time it is needed or we can simply make a function called factorial or combination
and we can call upon it any time it is needed.
we can also simply make a fumction called combination and call it to find combination of different n and r.
here we will first show the code to find the combination without using fuctions and then we will make a code 
that is more efficient and less time and space taking using function and function call.
below is the code to find the combination of n and r and as we can see its quite a long thing to repeat
many times in a code. as such we need to use function.

#include <stdio.h>
int main (){
int n,r;
printf("enter n:");
scanf("%d",&n);
printf("enter r:");
scanf("%d",&r);

int nfact=1;
for (int i=2;i<=n; i++){
    nfact=nfact*i;            //  n!
}
int rfact=1;
for (int i=2;i<=r; i++){
    rfact=rfact*i;            //  r!
}
int nrfact=1;
for (int i=2;i<=n-r; i++) {
    nrfact=nrfact*i;          //  (n-r)!
}
int comb= nfact/(rfact*nrfact);
printf("the combination of those two number is %d",comb);
return 0;

}




*/


int combination(int n, int r){

int nfact=1,comb;
for (int i=2;i<=n; i++){
    nfact=nfact*i;
}
int rfact=1;
for (int i=2;i<=r; i++){
    rfact=rfact*i;
}
int nrfact=1;
for (int i=2;i<=n-r; i++) {
    nrfact=nrfact*i;
}


return nfact/(rfact*nrfact);

}


int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);

    int combine= combination(n,r);
    printf("the combination of %d and %d is %d\n",n,r,combine);



    int a,b;
    printf("enter n:");
    scanf("%d",&a);
    printf("enter r:");
    scanf("%d",&b);

    int combine1= combination(a,b);
    printf("the combination of %d and %d is %d",a,b,combine1);

}
#include <stdio.h>
// understanding pre in post...
void PreInPost (int n){
    if (n==0) return;
    printf("Pre %d\n",n);
    PreInPost(n-1);
    printf("In %d\n",n);
    PreInPost(n-1);
    printf("Post %d\n",n);
    return;
}
int main (){
    PreInPost(2);
}
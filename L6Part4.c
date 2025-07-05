#include <stdio.h>

// MAZE PROBLEM -->

/* let us assume there is a 3 by 3 grid having boxex with names- 11,12,13,21,22,23,31,32,33.
        _____ ____ _____ 
        |____|____|____|
        |____|____|____|
        |____|____|____|

 if a person is in 11 and has to reach 33 but he can only go down or right while moving from one box to another
 and can only move to 1 box at a time. how many ways are there for the person to reach 33 from his initial 
 position in 11?
 here the ways are - R R D D, R D R D, R D D R, D R R D, D R D R, D D R R. (where R denotes right and D is for down).
 so the total number of ways = 6.
 this was easy to find as it was only a 3 by 3 grid but if we had to solve for 4 by 4 or 5 by 5 or even greater 
 dimensioned grid then it would be too difficult and inefficient to solve.
 as such we will write a recursion function to find the no of ways for such mazes when no. of rows and colums is 
 entered by user.

*/
int gridways(int r, int c){
    if (c==1 || r==1) return 1;
    int d= gridways(r-1,c)+ gridways(r,c-1);
    return d;
}


/* the above code works when we are going from the box 11 (i.e. the first box) to the last box of a grid.
however if we have to go from any box other than the first box then this code does not work as such we will 
now write another code for the above problem where we will have to input the box number of starting box
and box number of ending box i.e. their rows and columns. and so we will have to take 4 inputs.
*/

int mazeways(int sr, int sc, int er, int ec){ //sr-starting row,sc-starting column,er-ending row,ec-ending column.
if (sr==er || sc==ec) return 1;
if (sr>er && sc>ec) return 0;
int rightways= mazeways(sr,sc+1,er,ec);
int downways= mazeways(sr+1,sc,er,ec);
int totalways= rightways + downways;
return totalways;
}
// note that both the code for mazeways() and gridways() are only for this particular problem i.e. when we can only
// go downwards and right from where we are. if we wanted to find out the number of ways for any other condition
// (for ex- when we could only go downwards and leftwards) then this code will not work and we will have to right 
// another code.




int main (){
    printf("%d ",gridways(1,1));
    printf("%d ",gridways(1,2));
    printf("%d ",gridways(1,3));
    printf("%d ",gridways(2,1));
    printf("%d ",gridways(2,2));
    printf("%d ",gridways(2,3));
    printf("%d ",gridways(3,1));
    printf("%d ",gridways(3,2));
    printf("%d ",gridways(3,3));
    printf("%d ",gridways(4,4));
    printf("%d ",gridways(5,5));
    printf("%d\n\n",gridways(10,10 ));


    printf("%d ",mazeways(1,1,1,1));
    printf("%d ",mazeways(1,1,1,2));
    printf("%d ",mazeways(1,1,1,3));
    printf("%d ",mazeways(1,1,2,2));
    printf("%d ",mazeways(1,1,3,3));
    printf("%d ",mazeways(1,1,4,4));
    printf("%d ",mazeways(1,1,5,5));
    printf("%d ",mazeways(1,1,10,10));
    printf("%d ",mazeways(3,3,5,5));    
    printf("%d ",mazeways(1,1,3,4));    
    printf("%d ",mazeways(6,6,5,5));    

    return 0;
}
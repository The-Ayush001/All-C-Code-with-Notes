// an example of how functions work and in what order ->

#include <stdio.h>

void england()
{
    printf("you are in england\n"); // 6th step.
    return;                         // 7th step.
}
void australia()
{
    printf("you are in australia\n"); // 4th step.
    england();                        // 5th step
    return;                           // 8th step.
}
void india()
{
    printf("you are in india\n"); // 2nd step.
    australia();                  // 3rd step.
    return;                       // 9th step.
}

int main()
{             // code starts running from here.
    india();  // 1st step.
    return 0; // 10th step. code ends here.
}

// note that whatever function we are calling should be written above the place we are calling it from.
// for ex, in above example if void aus was below void india then the function call inside void india wouldn't
// work as it wouldn't be able to call the australia function.

/*if we want to call the function that is written below the function call code then we can use something called
function prototype. for this all we have to do is write "   [FUNCTION TYPE] [FUNCTION NAME] ();   "
, for example we if reverse the order of above code it will not work but if we add function prototype to it,
it will work as shown-

#include <stdio.h>
int main()
{        
    void india();
    india();  
    return 0;  
}

void india()
{
    printf("you are in india\n"); 
    void australia()
    australia();                 
    return;                      
}
void australia()
{
    printf("you are in australia\n"); 
    void england()
    england();                     
    return;                        
}
void england()
{
    printf("you are in england\n"); 
    return;                         
}


*/

/*
note -
1. the main fuction is always read first and is written only once in a single c file.
2. we can use unlimitied number of functions but no two functions should have the same name.
 */

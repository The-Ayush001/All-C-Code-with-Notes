/*Trying to pass a structure variable to a function(when structure is defined locally in main function)-
    #include <stdio.h>
    #include <string.h>
    void fun(pokemon p){       // a code like this will not work because pokemon will be considered undefined as
        printf("%d",p.hp)      // the structure is local to the main function. To make sure such functions work, 
    }                          // we need to declare the structure globally.

    int main() {
        struct pokemon{             // Local declaration of the structure (limited to main function).
            int HP;
            int attack;
            int defence;
        }pikachu;
        pikachu.HP=80;
        pikachu.attack=70;
        pikachu.defence=50;

        return 0;
    }
*/
#include <stdio.h>
#include <string.h>
typedef struct pokemon{                   // Global declaration of the structure.
    int HP;             // Note- User-defined data-types need to be defined globally for them to work in a function.
    int attack;    // If we only define them inside main function the functions will not be able to comprehend them. 
    int defence;
}pokemon;
void fun(pokemon p){  
    printf("%d\n",p.HP);  
}   
void change(pokemon p){
    p.HP=100;                 // changing the value of the attribute 'HP' of structure variable argument.
    printf("%d\n",p.HP);
}

int main() {
    pokemon pikachu;
    pikachu.HP=80;
    pikachu.attack=70;
    pikachu.defence=50;
    printf("%d\n",pikachu.HP);
    fun(pikachu);    // we only pass the structure variable name in the fuction and not the class name just like
                     //  we only pass the variable name normally and not its datatype(like int, char etc.)
    change(pikachu);        // calling the change function.
    printf("%d\n",pikachu.HP);      // the value of pikachu.HP remains unchanged.
    fun(pikachu);                   // the value of pikachu.HP remains unchanged.

// It is clear from the above code that the values changed in the function are limited to the function  
// and do not change the actual values of the attributes. 
// This implies that the structure variables are passed-by-value and not by reference.

    return 0;
}
#include <stdio.h>
#include <string.h>
typedef float real;
typedef int* pntr;
int main(){
/* Problem 1- create a struct type 'Person with name, salary and age as its attributes. Declare and initialize 
2 variables for this. print the name of first person and age of the second person.*/
// solution:
    struct Person{
        char name[50];
        float salary;
        int age;
    };
    struct Person Person1 = {"Hari", 345000.5, 40};
    struct Person Person2 = {"Mohit", 610538.875, 55};
    printf("Name of 1st person is %s.",Person1.name);
    printf("\nAge of second person is %d.",Person2.age);

//Note- Elements of structure are allocated continuous memory just like arrays.

/*In C, typedef is a keyword used to define new names (aliases) for existing data types. It doesn't create 
 a new type; rather, it provides a new name for an existing type, making the code more readable, concise, and
 easier to maintain.
 Syntax-
            typedef old_name new_name;
 for example we defined "real" as an alias for float below header line.
 And now we can declare and initialize a variable as float data type by using real as its datatype as shown below -
 */
    real a=32;
    printf("\n%f",a);

 // instead of writing struct Person Person1; at the time of decalration as we did in above problem, to make things
 // easier we can make an alias for the structure class using typedef. The above problem can be coded as-
    typedef struct person{
        char name[50];
        float salary;
        int age;
    }per;               // new alias is set to per
    per person1 = {"Hari", 345000.5, 40};     // we can use the alias "per" instead of "struct person".
    struct person person2 = {"Mohit", 610538.875, 55}; // we can still choose declare an object by writing
                                                       // "struct person" before its name.
    printf("\nName of 1st person is %s.",Person1.name);
    printf("\nAge of second person is %d.",Person2.age);
    //Note - we can also name the alias the same as the class name. if we do that, then we can just leave the
    //keyword 'struct' and declare the objects/members using class name.
    //   then we can write-    class_name object_name;    And thats it. we've declared a member for the structure.

    /*Another use of typedef (Issue with multiple pointer declarations in one line)- We cannot declare multiple  
    pointers in same line like this-
        int m=2,n=3;
        int* x=&m,y=&n;
        printf("%d %d",*x,*y); //this shows error as y is considered to be declared as int data type and not as a pointer.

        int m=2,n=3;
        int *x=&m,*y=&n;
        printf("%d %d",*x,*y); // this works.
        
    But to make things easiar we can make a typedef for a int pointer so that we can declare pointers without '*'.
    In line 3, we made 'pntr' the alias for 'int*'. this makes it possible for us to declare a variable as pointer of int
    data type using the self-made keyword 'pntr'.
        int m=2,n=3;
        pntr x=&m,y=&n;
        printf("%d %d",*x,*y);  //this works as well.
    */

    /*Array of structures- An array of structures is a collection of multiple structure variables, where each
     structure in the array can store multiple pieces of related data of different types (like integers, floats,
     characters, etc.). Essentially, it allows us to group together different types of data under one name and
     access them in a structured way, while also enabling us to store multiple instances of that data.
     Array of structures are alloted continuous memory blocks.*/
    typedef struct Pokemon {
        char name[20];
        int HP;
        int attack;
        int defence;
        char tier;
    }pokemon;                      // we made an alias 'pokemon' for 'struct pokemon'.
    pokemon arr[3];               // we made an array arr of the structure which can hold 3 members.
                                // had we not used d=typedef we would have to write-  struct pokemon arr[3];
    strcpy(arr[0].name,"Pikachu"); // we access each attribute by using dot operator - array_name[index].attributeName          
    arr[0].HP=80;           // we access first member by arr[0], second member by arr[1] and third by arr[2].
    arr[0].attack=70;
    arr[0].defence=50;
    arr[0].tier='A';

    strcpy(arr[1].name,"Bulbasaur");
    arr[1].HP=85;    
    arr[1].attack=65;
    arr[1].defence=80;
    arr[1].tier='A';

    strcpy(arr[2].name,"Charizard");
    arr[2].HP=95;     
    arr[2].attack=98;
    arr[2].defence=99;
    arr[2].tier='S';

    for(int i=0;i<3;i++){
        printf("\nName - %s\n",arr[i].name);
        printf("HP - %d\n",arr[i].HP);
        printf("Attack - %d\n",arr[i].attack);
        printf("Defence - %d\n",arr[i].defence);
    }
    /*NOTE- If we want to initialize the array of structures, we can't do it directly like-
        arr[2] = {"charizard", 95, 98, 99, 'S'}; 
        this is because that style of initialization is only valid for initializing the structure itself,
        and not for assigning to an individual array element.
        thus we have to initialize the attributes of the members of the structure individually.
    */


    return 0;
}
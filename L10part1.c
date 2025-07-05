/*
Structures- A structure is a collection of variables (which can be of different types) under a single name.
    Structures (also called structs) are a way to group several related variables into one place. 
    Each variable of the structure is known as a member of the structure.
    Also the structure name is called class and the variable or members of that structure are known
    objects of that class.
    And the characteristics/features of such members are called the attributes of the members.
    Unlike an array, a structure can contain many different data types (int, float, char, etc.).
    Structures are user defined data types.

Syntax -

    struct structureName {
        dataType attribute1;
        dataType attribute2;
    } member1, member2, member3;

            or

    struct structureName {
        dataType attribute1;
        dataType attribute2;
    };
    struct structureName member1;
    struct structureName member2;
    struct structureName member3;
*/
#include <stdio.h>
#include <string.h>
int main(){
    struct pokemon{
        int HP;
        int attack;
        int defence;
        char tier;
    }pikachu, bulbasaur;
    pikachu.HP=80;                 // we access each attribute by using dot operator-  memberName.attributeName
    pikachu.attack=70;
    pikachu.defence=50;
    pikachu.tier='A';

    bulbasaur.HP=85;
    bulbasaur.attack=65;
    bulbasaur.defence=80;
    bulbasaur.tier='A';

    struct pokemon charizard;
    charizard.HP=95;
    charizard.attack=98;
    charizard.defence=99;
    charizard.tier='S';

    /*instead of declaring and then initializing attributes individually as we did above, we can also do this-
        struct pokemon pikachu = {80, 70, 50, 'A'};
        struct pokemon bulbasaur = {85, 65, 80, 'A'};
        struct pokemon charizard = {95, 98, 99, 'S'};
    the values will be designated according to the order in which the attributes are defined in the class.
    */

    printf("%d\n",pikachu.defence);
    printf("%c\n",bulbasaur.tier);
    printf("%d\n",charizard.HP);
    // In the above example, pokemon is class, pikachu,charizard,and bulbasaur are its members or objects and
    // HP, attack, defence, tier are the attributes of the objects of the class pokemon.  

    // we can also make a class inside a class by nesting them as follows-
    struct legendaryPokemon{
        char specialAbility[50];         // extra attribute that was not present in pokemon class.
        struct pokemon poke;        
    };
    struct legendaryPokemon mewtwo;
    strcpy(mewtwo.specialAbility, "Psystrike");
    mewtwo.poke.HP = 106;                              //accessing element of class legendaryPokemon.
    mewtwo.poke.attack = 154;
    mewtwo.poke.defence = 90;
    mewtwo.poke.tier = 'S';
    printf("\nMewtwo's Special Ability: %s\n", mewtwo.specialAbility);
    printf("Mewtwo's HP: %d\n", mewtwo.poke.HP);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct vehicle{
        char name[100];
        char medium[100];
        int NoOfWheels;
    }car,bike,helicopter;
        // Note- we can not assign a string to an attribute like we do with int or float.
        // to assign a string we need to use strcpy function as shown below.

    strcpy(bike.name, "Yamaha");     // Copy string "Yamaha" into bike.name
    strcpy(bike.medium, "Land");     // Copy string "Land" into bike.medium
    bike.NoOfWheels = 2;             // Set bike's number of wheels to 2

    strcpy(car.name, "Maruti");    
    strcpy(car.medium, "Land");         
    car.NoOfWheels = 4;                 

    strcpy(helicopter.name, "Apache");  
    strcpy(helicopter.medium, "Air");  
    helicopter.NoOfWheels = 0;         

    printf("Car: %s, Medium: %s, Wheels: %d\n", car.name, car.medium, car.NoOfWheels);
    printf("Bike: %s, Medium: %s, Wheels: %d\n", bike.name, bike.medium, bike.NoOfWheels);
    printf("Helicopter: %s, Medium: %s, Wheels: %d\n", helicopter.name, helicopter.medium, helicopter.NoOfWheels);

    // Although we can not assign a string to an attribute like we do with int or float, we can do it by accessing
    // individual elements of the string. this process is inefficient and so it is better to use strcpy.
    car.name[0]='T';            
    car.name[1]='h';          
    car.name[2]='a';
    car.name[3]='r';
    car.name[4]=' ';            //to replace the extra letters with blankspace.
    car.name[5]=' ';
    printf("%s",car.name);

 /*better way to do this would be-
    strcpy(car.name,"Thar");
    printf("%s",car.name);
*/
    return 0;
}
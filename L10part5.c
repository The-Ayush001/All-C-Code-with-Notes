#include <stdio.h>
#include <string.h>
struct Person
{
    int roll_num;
    char name[50];
    char department[30];
    char course[30];
    int year_of_joining;
};
void check(struct Person a, struct Person b)
{
    // if (a.department == b.department)   //we cannot compare strings like this.
    if (strcmp(a.department, b.department) == 0)
    {
        printf("The students have the same department.\n");
    }
    else
    {
        printf("The students do not have the same department.\n");
    }
}
typedef struct Book{
    char name[50];
    int cost;
    int release_year;
}book;
void change(book* x ){
    strcpy((*x).name,"The Black Swan");     // first way of accessing attributes using pointer.
    x->cost=759;                          // second way of accessing attributes using pointer.
    x->release_year=2016;
}
int main()
{
    /*Problem 4- Create a structure to specify data on students with these attributes: roll number, name,
    department, course, year of joining. Create 2 structure variables and then create a function to check if
    two students have the same department. Pass the two structure variable as input to this function. */
    // solution:
    // structure and the required function are declared above (outside main function).
    struct Person person1, person2;
    strcpy(person1.department, "Mechanical Engineering");
    strcpy(person2.department, "Mechanical Engineering");
    check(person1, person2);

    // Structure pointers and memory allocation of structures -
    typedef struct pokemon
    {
        int HP;
        int attack;
        int defence;
        char tier;
        char name[50];
    } pokemon;
    pokemon pikachu;
    pokemon *x = &pikachu;
    printf("%p\n", &pikachu.HP);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.defence);
    printf("%p\n", &pikachu.tier);
    printf("%p\n", pikachu.name); // & is not needed for arrays and strings.

    printf("%p\n", x); // value of x was initialized to the address of the structure variable pikachu and when
                       // we print this value we find it to be the same as the address of pikachu.hp which is the
                       // first attribute of the structure. This shows that the address of the structure variable
                       // is the address of its first attribute (as per declaration) exactly like arrays.

    /*Problem 5- Create a structure 'person' having attributes as age and weight. Acsess its structure variable
    using pointers. */
    // solution-
    typedef struct human
    {
        int age;
        float weight;
    } person;
    person h1, h2;
    person *i = &h1, *j = &h2;

    //this is how we access attributes using pointers-
    (*i).age=23;      // *i points to the structure variable h1 so this line means-  h1.age=23
    (*i).weight=57.5;   // Note that we have to put the pointers in small braces when accessing the attributes.
    (*j).age=66;
    j->weight=60.73;       // instead of writing (*j).weight=57.5 we can do this. it makes code cleaner.
    printf("\n%d\n",h1.age);
    printf("%f\n",h1.weight);
    printf("%d\n",h2.age);
    printf("%f\n",(*j).weight);  // here (*j).weight is the same as h2.weight.

/* we have seen that when we pass structure variables to a function they are passed-by-values and so any change made to
the attributes inside the function do not affect the actual values of the attributes. we can circumvent that by 
using pointers.
for ex-
we've declared & defined a function named 'change' and a structure with class name 'Book' with alias 'book' 
just before main function. now we will change the attribute values of a variable of that structure using pointers. */

    book book1= {"Denial of death",439,2012};
    printf("\n%s\n",book1.name);
    printf("%d\n",book1.cost);
    printf("%d\n",book1.release_year);
    change(&book1);
    printf("\n%s\n",book1.name);
    printf("%d\n",book1.cost);
    printf("%d\n",book1.release_year);


}
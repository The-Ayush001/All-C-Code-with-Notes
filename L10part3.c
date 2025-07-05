#include <stdio.h>
int main(){

/*Problem 2- A record contains name of cricketer, his age, number of test matches that he has played
 and the average runs that he has scored in each test match. Create an array of structure to hold records
 of 3 such cricketers and then WAP to read these records. */
//solution-

/*  typedef struct cricketers{
    char name[50];
    int age;
    int No_of_Matches;
    int avg_runs;
     }cric;
     cric arr[3];
     puts("Enter the players' data:\n");
     for (int i=0;i<3;i++){
        printf("Enter the name - ");
        getchar();
        scanf("%[^\n]s",arr[i].name); //there's some problem with this. the first character of the name is not being printed. 
        getchar();
        printf("Enter the age - ");
        scanf("%d",&arr[i].age);
        printf("Enter the no. of test matches played - ");
        scanf("%d",&arr[i].No_of_Matches);
        printf("Enter the average run scored - ");
        scanf("%d",&arr[i].avg_runs);
        puts("\n");
    }
    for (int i=0;i<3;i++){
        printf("\nName - %s",arr[i].name);
        printf("\nAge - %d",arr[i].age);
        printf("\nNo. of test matches played - %d",arr[i].No_of_Matches);
        printf("\nAverage run scored - %d",arr[i].avg_runs);
        printf("\n");
    } */
// the above code (which is commented-out) was not working properly due to new line character related error 
// while scanning and due to the use of "%[^\n]s", thus the solution is modified to this-
    typedef struct cricketers{
        char firstname[20];
        char lastname[20];
        int age;
        int No_of_Mateches;
        int avg_runs;
    }cric;
    cric arr[3];
    puts("Enter the players' data:\n");
    for (int i=0;i<3;i++){
        printf("Enter the firstname - ");
        scanf("%s",arr[i].firstname); 
        printf("Enter the lastname - ");
        scanf("%s",arr[i].lastname); 
        printf("Enter the age - ");
        scanf("%d",&arr[i].age);
        printf("Enter the no. of test matches played - ");
        scanf("%d",&arr[i].No_of_Mateches);
        printf("Enter the average run scored - ");
        scanf("%d",&arr[i].avg_runs);
        puts("\n");
    }
    for (int i=0;i<3;i++){
        printf("\nName - %s %s",arr[i].firstname,arr[i].lastname);
        printf("\nAge - %d",arr[i].age);
        printf("\nNo. of test matches played - %d",arr[i].No_of_Mateches);
        printf("\nAverage run scored - %d",arr[i].avg_runs);
        printf("\n");
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct Book{
        char name[50];
        int cost;
        int release_year;
    };
    struct Book book1= {"Denial of death",439,2012};
    struct Book book2;

    /*strcpy(book2.name,book1.name);    // we can make the attributes of book2 equal to book1 individually like this.
    book2.cost = book1.cost; 
    book2.release_year = book1.release_year;
    */
    book2=book1;      // we can directly put book2=book1 to make all the atributes of book2 equal to that of book1.
    printf("\nBook 1:\nName - %s, cost - %d, release year - %d.",book1.name,book1.cost,book1.release_year);
    printf("\nBook 2:\nName - %s, cost - %d, release year - %d.",book2.name,book2.cost,book2.release_year);
    book1.cost=199;                             // making changes in book1.
    book1.release_year=2000;                    // making changes in book1.
    printf("\nBook 1:\nName - %s, cost - %d, release year - %d.",book1.name,book1.cost,book1.release_year);
    printf("\nBook 2:\nName - %s, cost - %d, release year - %d.",book2.name,book2.cost,book2.release_year);
    // the values of attributes of book1 changes but that of book2 remains the same.
    // this implies that book2 was a deep copy of book1.


/*Problem 3- Create a structure date that contains three members namely day, month, and year. create 2 structure
variables with different dates and now compare the two. if the dates are equal the display the message "Equal
otherwise display "unequal".
Now create another structure variable by assigning the first date to it. compare the first and the third dates.*/
//solution-
    struct date{
        int day;
        int month;
        int year;
    }date1,date2;

    date1.day=17;
    date1.month=7;
    date1.year=2023;

    date2.day=03;
    date2.month=02;
    date2.year=2024;

    if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year)
        printf("\nEqual");
    else printf("\nUnequal");

//Note- we cannot write " if(date1==date2) " instead of the above if-condition since we cannot compare two 
// structures in that way. we can only do so by comparing the value of each attribute individually.

    struct date date3;
    date3=date1;
    if(date1.day==date3.day && date1.month==date3.month && date1.year==date3.year)
    printf("\nEqual");
    else printf("\nUnequal");
    
}
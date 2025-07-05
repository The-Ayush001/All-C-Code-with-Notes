#include <stdio.h>
#include<string.h>
int main()
{
    // Copying a string-
    //method-1:
    char s[] = "string";
    char *p = s; // string is not actually copied and only the pointer is moved to its base address.
    printf("%s", p);
    s[0] = 'S';        // change made in initial string.
    printf("\n%s", p); // change shows in pointer as well.
                       // This copy of the string is called a shallow copy.

    //method-2 (actual method):
    char st[] = "it is what it is";
    int i = 0, size = 1;
    while (st[i] != '\0')
    {
        size++;                 //size includes null char.
        i++;
    }
    char sti[size];
    i = 0;
    while (st[i] != '\0')
    {
        sti[i] = st[i];
        i++;
    }
    printf("\n1st - %s", st);
    printf("\n2nd - %s", sti);
    st[0]='I';       
    st[1]='T';                // changes made in original string.
    printf("\n1st - %s", st);
    printf("\n2nd - %s", sti);      // changes do not show in second string.
    // this copy of string is what we call a deep copy.
        
    /* Note-  size(length) of a string when found using in-built function strlen() does not count null char.
        if we write the above code where we do not count null char when finding size then it will be like this-
    char st[] = "it is what it is";
    int i = 0, size = 0;
    while (st[i] != '\0')
    {
        size++;                 //size does not includes null char.
        i++;
    }
    char sti[size];
    sti[i]='\0';           // IMPORTANT NOTE- this line makes sure that the array terminates with null character.
    i = 0;
    while (st[i] != '\0')
    {
        sti[i] = st[i];
        i++;
    }
    printf("\n1st - %s", st);
    printf("\n2nd - %s", sti);
    st[0]='I';       
    st[1]='T';                     // changes made in original string.
    printf("\n1st - %s", st);     
    printf("\n2nd - %s", sti);     // changes do not show in second string.
                                   // this copy of string is what we call a deep copy.
    */

    //method-3:
    char* stt = "life could be a dream";
    char* pt=stt;
    printf("\n%s",pt);                 //this too is a deep copy but its read-only string and individual 
    stt= "LIFE COULD BE A DREAM";      //elements are non-modifiable.
    printf("\n%s",pt);          
    printf("\n%s",stt);          
    
    // Inserting a character in a string-
    char str[]="hello here!";     // we have to put 't' at 6th index and shift forward the characters after it.
    puts(str);
    int length = strlen(str)+2;
    char str2[length];
    for(int i=length;i>5;i--){
        str[i]=str[i-1];
    }
    str[6]='t';
    puts(str);

/* standard library functions for strings available in <string.h> ->
    sterlen(char *str)          - returns the length of the string.
    strcpy(char *s1,char *s2)   - copies the content of string s2 into s1.
    strcat(char *s1,char *s2)   - concatenates (connects) string s1 with s2 and stores the result in s1. 
    strcmp(char *s1,char *s2)   - compares the two strings.
    strncpy(char *s2,char *s1, int len)   - Copies a number of characters from one string 
                                            into the memory of another string.
*/

}
/* Functions-- functions are uesd to avoid repititions which can not be avoided through loops and they are also used to
make the code readable and compact.  /
the main in int main is a function. to better understand the need for function we can take the following example -
suppose we have to print a certian thing or run a certain code quite often every now and then. in such cases we will
have to copy the required code and print it many times over. doing that is obviously inefficient and as such we use
something called functions. for ex-
 let us write a code for printing  " good morning! how are you?" in between our code many times but not consecutively.

*/

#include <stdio.h>
void greetme()
{ // void is used here to make a function called greetme. void is an external function and is
  // only read by the terminal if it is called upon.
  printf("good morning! how are you?\n"); // inside void we write any code that we have to repeat later on.
  return;                                 // this marks the end of the function.
}
int main()
{ // the main function is always the first to be read by the terminal.
  // rest of the functions are only read when they are called upon.
  int a = 1, b = 3, c = 9;
  greetme(); // here the name of the function is written and after that small brackets and semi colon are placed,
             // this is called a function call. and whenever a function call is used the code jumps to where we
             // named the function and executes the code inside that particular function.
  printf("%d\n", a);
  greetme();
  printf("%d\n", b);
  printf("jkgfdjg");
  greetme();
  printf("%d\n", c);
  greetme();
  printf("%d\n", a + b);
  printf("%d\n", c + b);
  printf("%d\n", b + b + b);
  greetme();
  printf("%d\n", a + a + b + c);
  greetme();

  return 0;
}
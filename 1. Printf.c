/* GUESS THE OUTPUT THEN COMPILE AND RUN THE CODE TO FIND OUT THE O/P
*/
#include <stdio.h>       // standard input-output headerfile: includes printf and scanf
#include <limits.h>     // contains info about the size and range of various int data types
int var=100;                //testing variable
int w = 10   ;              //another testing variable

int main()
{   
    //anything within " " is considered as a string of characters
    printf("First Program");  

    //anything other than a string needs a format specifier (ref: f-s)
    printf("%d",5+2); 
    //here, %d to tell 'printf()' to expect a decimal value (base 10)
    //Warning: Don't use 'printf(5)' else 'printf()' would treat it as a pointer (memory address), 
    //and the output would not be what you expect.

    //you can also do this
    printf("\nI was born on %dth of December, %d",5,2001) ;
    //f-s(here, %d) can also be used as a placeholder for placing the value amidst the string

    //just like the the '%' symbol 'printf()' also excepts the '\' symbol
    printf("\nThis is a new line \n");
    //here, \n is called an escape sequence and represents the newline character

   //Other format specifiers
   /*Integers*/ /* %d, %u, %o, %x, %b */
   printf("\n%d or %i is a signed integer",-100);           //-2,147,483,648 to 2,147,483,647 
   printf("\n%u is a unsigned integer",100);         // 0 to 4,294,967,295
   printf("\n%o is an octal integer",64);         //Convert to octal number system: 0 to 7, 10 to 17,...70 to 77, 100 to 777, etc
   printf("\n%x is a hexadecimal integer",256);   //Convert to hexadecimal number system: 0 to 9, a to f, 10 to 19, 1a to 1f,...100 to fff, etc 
   printf("\n%b is a binary integer",4);      //Not widely supported: Convert to binary number system: 0, 1, 10, 11,... 111, etc
   
   /*Floating-Point Numbers*/ /* %f, %e, %g */
   printf("\n\n%f has a decimal notation",5.);         //5.000000
   printf("\n%e has a scientific notation",5.5);      //5.500000e+000
   printf("\n%g has the shortest form",5.5);         //5.5 
   printf("\n%.2f has a decimal notation till 2 decimal values",5.);         //5.00

   /*Characters and Strings*/  /* %c, %s */
   printf("\n\n%c prints a single byte character",'5');         //Prints 5 directly 
   printf("\n%c prints a single byte character",'A');         //Prints A directly
   printf("\n%c prints a single byte character",5);           //Prints from the ASCII value list
   printf("\n%c prints a single byte character",53);          //Prints from the ASCII value list
   printf("\n%c prints a single byte character",65);         // Prints from the ASCII value list
   printf("\n\n%s is a string of characters","this");         //A string is just a null-terminated character array
   
   /* More about format-specifiers */
   printf("\n\n%p is the address of the string in hexadecimal number","this");         //Prints the memory address of the string "this" 
   printf("\n%p is the address of the variable in hexadecimal number", &var);        //Prints the memory address of the variable var
   printf("\n%p is the hexadecimal value of the value stored in var", var);         //Acts as a hexadecimal converter without the address operator(&)
   printf("\n Using dynamic width %*d", w, var);              // * is used to leave dynamic space (here, 10) before printing the variable
   printf("\n Using static width %*d", 10, var);             // or you can just do this
   printf("\n Using static width %10d", var);               // or you can do this
   printf("\n Using static width %10c", var);              // or this
   
   
   /*Try this*/





   /* Using Escape Sequences */
   
   /*calc in printf*/
    
    return 0;
} 

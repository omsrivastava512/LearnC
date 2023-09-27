/* GUESS THE OUTPUT THEN COMPILE AND RUN THE CODE TO FIND OUT THE O/P
    */
#include <stdio.h>       // standard input-output headerfile: includes printf and scanf
#include <limits.h>      // contains info about the size and range of various int data types
 

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

    //just like the the '%' symbol printf also excepts the '\' symbol
    printf("\nThis is a new line \n");
    //here, \n is called an escape sequence and represents the newline character

   //Other format specifiers
   /*Integers*/
   printf("\n%d is a signed integer",-5);           //-2,147,483,648 to 2,147,483,647 
   printf("\n%u is a unsigned integer",5);         // 0 to 4,294,967,295
   printf("\n%o is an octal integer",64);         //Convert to octal number system: 0 to 7, 10 to 17,...70 to 77, 100 to 777
   printf("\n%x is a hexadecimal integer",256);   //Convert to hexadecimal number system: 0 to 9, a to f, 10 to 19, 1a to 1f,...100 to fff 
   



    
    return 0;
} 

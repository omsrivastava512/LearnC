/* GUESS THE OUTPUT THEN COMPILE AND RUN THE CODE TO FIND OUT THE O/P
    */
#include <stdio.h>
 

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



    
    return 0;
}

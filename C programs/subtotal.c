#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*  Method to check where the given digits are all integers  */
bool check(const char *c){
  //  Since a string is a null-terminated array
    for(int i = 0;c[i]!='\0'; i++){           //  You can access the elements using an index, here 'i' ........(1)
      if(c[i]<'0' || c[i]>'9')
      	return false; }
      // It should return false if the input string is not a valid integer.
	return true;
}

int toInt(const char* c) {
    int result = 0;
    int sign = 1; // Initialize sign as positive
    if(check(c)){
        // Skip white spaces
        while (*c == ' ') {
            c++;
        }
        // Handle signs
        if (*c == '-' || *c == '+') {
            sign = (*c == '-') ? -1 : 1;
            c++;
        }
        // Convert characters to integers
        while (*c!='\0') {                  //or you can access them using pointer .........(2)
            result = result * 10 + (*c - '0');
            c++;
        }
        // Apply sign
        return sign * result;
    }
}

int main(){
    int sum = 0;      // Variable to store the total sum
    char num[20];     // Character array to store the user input (up to 20 characters)
    int i = 1;        // Integer variable to store the converted input value, initialized to 1
    
    // Loop until the user enters 0
    do {
        printf("Say the number: "); 
        scanf("%s", num);            // Read the user input as a string
        
        if (!check(num))             // Check if the input is a valid integer
            continue;                // If not valid, skip the current iteration of the loop
        
        i = toInt(num);              // Converted integer value is stored in i
        sum += i;                    // Add the integer value to the total sum
        
    } while (i);                     // Continue the loop as long as the input integer is not 0
    
    printf("Your total: %d",sum);
        
        
   return 0 ;
}

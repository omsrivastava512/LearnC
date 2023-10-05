
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Method to check if the given string contains valid numerical characters */
bool check(const char *c){
    int i=0; 				//using i as an index variable to access array characters
    if(c[i]=='-'||c[i]=='+')
        i++;				//increment i value if the user has input a signed number
    
  // Iterate through the string to check for valid numerical characters
// Using do-while instead of while so in case of null input, the method does not return true by default
    do{            
      if(c[i]<'.' || c[i]>'9')		//note: '\0' < '0' which is 0 < 48
      	return false;
      	if(c[i]=='/') 			//since '/' lies b/w '.' and '9' in the character map
      	return false;
      	i++;
    }
    while(c[i]!='\0');			//  since a string is a null-terminated array
	return true;		
}

/* Convert the given string to a double */
double stringToDouble(const char* c) {
    double result = 0;
    double decimal=0;  		 
    int sign = 1; 		// Initialize sign as positive
	
        // Skip white spaces
        while (*c == ' ') {
            c++;
        }
        if (*c == '-' || *c == '+') {
            sign = (*c=='-')? -1:1;
            c++;
        }
        // Handle signs
    if(check(c)){
        // Convert characters to double
        while (*c!='.') {          // Eliminates when receives the first decimal '.'         
           if(*c=='\0')		// If no decimal present
           goto a;
            result = result * 10 + (*c - '0');
            c++;
        }
        
        const char* ptr =++c; 		// Stores the address of where the decimal numbers start

	// Storing decimal numbers 
        while(*c!='\0'){		
            if(*c=='.')			// If receives another decimal '.'
            break;
            decimal = decimal*10 + (*c - '0');
            c++;
        }
        while(*ptr!='\0'){		
            if(*ptr=='.')		// Same reason as above
            break;
            decimal=decimal/10;		// Placing decimal before the numbers
            ptr++;
        }
        
        a:
        // Apply sign
        return sign * (result+decimal) ;
    }
}

int main(){
        char num[20];
        double i=1, sum=0;
        char* ptr;
	// Taking inputs iteratively and adding them to sum
        do{
          printf("Say the number: ");
          scanf("%s",num);
          
          if(!check(num)) 	// Ignoring invalid inputs
          continue;
          
          i=stringToDouble(num);
          sum+=i;
        }        
        while(i);
        
        
        printf("Your total: %g\n", sum);
        
        
        return 0 ;
}

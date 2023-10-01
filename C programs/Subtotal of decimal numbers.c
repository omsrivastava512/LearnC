
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*  Method to check where the given digits are all numerical  */
bool check(const char *c){
  //  since a string is a null-terminated array
    for(int i = 0;c[i]!='\0'; i++){            
      if(c[i]<'.' || c[i]>'9')
      	return false;
      	if(c[i]=='/'||c[i]==',')
      	return false;
    }
	return true;
}

double toInt(const char* c) {
    double result = 0;
    double decimal=0;
    int count=0;    //count the number of points
    int sign = 1; // initialize sign as positive
        // skip white spaces
        while (*c == ' ') {
            c++;
        }
        // handle signs
        if (*c == '-' || *c == '+') {
            sign = (*c=='-')? -1:1;
            c++;
        }
    if(check(c)){
        // convert characters to double
        while (*c!='.') {                  
           if(*c=='\0')
           goto a;
            result = result * 10 + (*c - '0');
            c++;
        }
        
        const char* ptr =++c;
        
        while(*c!='\0'){
            if(*c=='.')
            break;
            decimal = decimal*10 + (*c - '0');
            c++;
        }
        while(*ptr!='\0'){
            if(*ptr=='.')
            break;
            decimal=decimal/10;
            ptr++;
        }
        
        a:
        // Apply sign
        return sign * (result+decimal) ;
    }
}

int main(){
        char num[20];
        int t=5;
        while(--t){
            
          printf("Say the number: ");
          scanf("%s",num);
         
        
        
        printf("Your total: %f\n", toInt(num));
        }
        
        
        return 0 ;
}

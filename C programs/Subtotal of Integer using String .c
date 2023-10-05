#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool check_number(char str[]) {
   for (int i = 0; i < strlen(str); i++)
   if (isdigit(str[i]))
      return true;
      return false;
}  



int main(){
int sum=0;
char  num[20];

printf("Say the number:\n  ");
do{
scanf("%s",num);

if(!check_number(num)){
printf("+ ");
continue;
}
if(atoi(num)){        
  printf("+ ");
  sum+=atoi(num);
  }
}while(*num!='0');

printf("Your total: %d",sum);


return 0 ;
}

#include <stdio.h>
#include <stdlib.h>


int main(){
int sum=0;
char  num[20];

printf("Say the number:/n  ");
do{
scanf("%s",num);

if(atoi(num)){        
  printf("+ ");
  sum+=atoi(num);
  }
}while(atoi(num));

printf("Your total: %d",sum);


return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
int sum=0;
int num;
printf("Say the number:\n  ");
  
do{
scanf("%d",&num);
if(num){         //if num is true i.e num!=0
  printf("+ ");
  sum+=num;
}
}while(num);  //the loop breaks when the user gives zero as input

/*If you enter a wrong number, just enter the negative of that number next time*/

printf("Your total: %d",sum);

/*Works fine unless the user gives a non-negative input*/

return 0 ;
}

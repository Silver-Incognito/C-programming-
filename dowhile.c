//do while loop 
/*
Name:OWAYA E AUGUSTINE
REG:CT101/G/23524//24
*/
#include<stdio.h>

int main(){
  int start,stop,sum=0;
  
  printf("Enter start:");
  scanf("%d",&start);
  printf("Enter when to stop:");
  scanf("%d",&stop);
  
  do {printf("%d\n",start);
  sum=sum+start;
  sum+=start;
  start++;
  }
  while(start,start<=stop);
  
  printf("The sum%d",sum);
  
  return 0;
  } 

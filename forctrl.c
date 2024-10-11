//FOR LOOP
/*
  NAME:OWAYA E AUGUSTINE 
  REG :CT101/G/23524/24
  */

#include<stdio.h>

int main(){
  int start,stop,sum=0;
  
  printf("Enter where to start:");
  scanf("%d",&start);
  printf("Enter when to stop:");
  scanf("%d",&stop);
  
  for(start;start<=stop;start++){
    printf("%d\n",start);
    sum=sum+start;}
  
    printf("The sum is %d",sum);
  
    return 0;
    }

#include <stdio.h>
 
//Coded by Thanwa Sakdarat 
//Student ID : 64011148
 
int main(){
  int totalrow,rowno=1,symbol;
  scanf("%d",&totalrow);
  while(rowno<=totalrow){
    for(symbol=1;symbol<=totalrow;symbol++){
      printf("*");
    }
   printf("\n"); 
   rowno++;
  } 
  return 0;
}




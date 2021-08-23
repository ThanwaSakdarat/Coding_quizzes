#include <stdio.h>

//Create pyramid shape out of input 

int main(){
    int number,row,space=0,symbol=0;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(row=1; row<number; row++){
        while(space<number-row){
            printf(" ");
            space++;
        }
        while(symbol<(2*row)-1){
            printf("*");
            symbol++;
        }
    space = 0;
    symbol = 0;    
    printf("\n");    
    }
    return 0;
}
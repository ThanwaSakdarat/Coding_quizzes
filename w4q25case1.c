#include <stdio.h>

//Create pyramid shape out of input 

int main(){
    int number,row,space,symbol,a;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(row=1; row<+number; row++){
        for(space=0; space<number-row; space++){
            printf(" ");
        }
        for(symbol=0 ; symbol<(2*row)-1 ; symbol++ ){
            printf("*");
        }
    printf("\n");    
    }
return 0;
}
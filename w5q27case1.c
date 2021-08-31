#include <stdio.h>

int main(){
    int space,symb,row,number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(row=0; row<number ; row++){
        for(space=0;space<row;space++){
            printf(" ");
        }
        for(symb=0; symb<(2*number)-1-(2*row); symb++){
            printf("*");
        }
    printf("\n");
    }

    for(row=0 ; row<number-1; row++){
        for(space=0 ; space<(number-2)-row; space++){
            printf(" ");
        }
        for(symb=0; symb< 3+(2*row) ;symb++){
            printf("*");
        }
    printf("\n");    
    }
    return 0;
}
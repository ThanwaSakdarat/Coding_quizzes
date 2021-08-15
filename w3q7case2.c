#include <stdio.h>

//Coded by : Thanwa Sakdarat 
//Student ID : 64011148
//Find the largest number using | array,if,loop|

int main(){
    int array[100],number,c,locate=0;
    printf("Enter number of elements in array :");
    scanf("%d",&number);
    printf("Type a number and then press ENTER until you\'re finished\n");
    for(c=0 ; c < number ; c++){
        scanf("%d",&array[c]);
    }
    for (c = 1; c < number; c++){
        if(array[c]>array[locate]){
            locate = c;
            printf("The largest number is %d  ",array[locate]);
        } 
    }
    return 0;
}
    


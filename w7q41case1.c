#include <stdio.h>
int a,b,c;

void max(int x,int y){
    if(x>y){
        c=x;
    }
    else{
        c=y;
    }
}

int main(){
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    max(a,b);
    printf("Max number : %d\n",c);
    return 0;
}
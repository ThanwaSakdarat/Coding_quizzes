#include <stdio.h>
int c;
void max(int x,int y){
    if(x>y){
        c=x;
    }
    else{
        c=y;
    }
}

int main(){
    int a[2];
    int i;
    for(i=0; i<2;i++){
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    max(a[0],a[1]);
    printf("Max number: %d\n",c);
    return 0;
}
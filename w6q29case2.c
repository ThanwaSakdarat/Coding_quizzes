#include <stdio.h>

void med(float sum){
    sum = sum/10;
    printf("Median : %.2f\n",sum);
}

int main(){
    int n[10],ind;
    float sum=0;
    for(ind=0 ; ind<10; ind++){
        printf("Enter student#%d's score : ",ind+1);
        scanf("%d",&n[ind]);
        sum+=n[ind];
    }
    printf("_______________________________\n");
    printf("These are student's score list\n");
    printf("-------------------------------\n");
    for(ind=0 ; ind<10; ind++){
        printf("Student#%d's score : %d\n",ind+1,n[ind]);
    }
    med(sum);
    return 0;
}
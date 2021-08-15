#include <stdio.h>

//Coded by : Thanwa Sakdarat 
//Student ID : 64011148
//Find the largest number using | if |

int main(){
    int a,b,c;
    printf("Type 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(c>a && c>b){
            printf("%d has the most value",c);
        }
    else if(b>a && b>c){
            printf("%d has the most value",b);
        }
    else if(a>b && a>c){
            printf("%d has the most value",a);
        } 
    else if(a==b && a>c && b>c){
            printf("First and second have the most value");
        }
        else if(b==c && b>a){
            printf("Second and third have the most value");
        }
        else if(c==a && c>b){
            printf("First and third have the most value");
        }
    else {
        printf("three numbers have same value");
    }
    return 0;
}


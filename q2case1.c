#include <stdio.h>
#include <math.h>

//BMI Calculator

int main(){
    float w,h,bmi;
    printf("What's your weight in kilograms: ");
    scanf("%f",&w);
        if(w>0){
            printf("What's your height in metres: ");
            scanf("%f",&h);
        }
        if(w<=0){
            printf("Please enter positive number\n");
        }
        else if(h>0 && w>0){
            bmi = w/pow(h,2);
            if(bmi<=18.5 && bmi>0){
            printf("Your BMI is %.2f and it\'s below the standard\n",bmi);
            }
            else if(bmi>18.5 && bmi<=24.9){
            printf("Your BMI is %.2f and it\'s in the standard\n",bmi);
            }
            else if(bmi>=25.0 && bmi<=29.9){
            printf("Your BMI is %.2f and it\'s slightly above the standard\n",bmi);
            }
            else if(bmi>=30.0){
            printf("Your BMI is %.2f and it\'s highly above the standard\n",bmi);
            }
        }
        else if(h<=0){
            printf("Please enter positive number\n");
        }
        else{
            printf("Wrong entry\n");
        }
    return 0;
}
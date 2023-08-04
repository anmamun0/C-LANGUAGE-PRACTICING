#include<stdio.h>
#include<stdbool.h>
int main(){
    int a= 5 , b=5 , c=10, var , var1;

    printf("Enter a value + or - "); scanf("%d",&var);
    if (var>0) {
        printf("You have entered a possitive number \n");
        if (var == 1) {
            scanf(" %d", &var1);
            printf("is TO small \n"); 
        }
        else if (var==100){
            printf("is To High");
        }
    }
    else if (var == 0){
        printf("Your value is 0");
    }
    else{
        printf("YOu have entered a nagative number");
    }
  
    return 0;
}

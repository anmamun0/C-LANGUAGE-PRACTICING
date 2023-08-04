#include<stdio.h>
#include<stdbool.h>
int main(){

int num ;
float num2 ;
double num3;
char num4;

printf("Enter Intiger Data \n"); scanf("%d", &num);
printf("Enter Float Data \n") ; scanf("%f", &num2);
printf("Enter Double Data : \n"); scanf("%lf", &num3);
printf("Enter Character Data: \n"); scanf(" %c", &num4);

printf("Your Intiger Date   : %d  \n", num);
printf("Your float Data     : %f  \n", num2);
printf("Your Double Data    : %lf \n", num3);
printf("Your Character Data : %d - %c \n", num4);

// printf("Enter Value c and int ");scanf(" %c%d", &num4 , &num);
// printf(" Character : %c  Number : %d", num4, num);

return 0;
}

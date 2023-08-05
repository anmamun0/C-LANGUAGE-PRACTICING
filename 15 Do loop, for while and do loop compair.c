#include<stdio.h>
#include<stdbool.h>
int main(){
/*----------------------------------while Loop---------------------------------------------------*/
    
/*
    while (testExpression) {
        // the body of the loop 
    }
*/
    int i =1, a,b,c;

    while (i<= 5)
    {
        printf("%d \n", i);
        ++i;
    }
/*------------------------------------For Loop-----------------------------------------------*/
  
/*
    for (initializationStatement; testExpression; updateStatement)
    {
        // statements inside the body of loop
    }       
*/
    int a;

    for (a=1;a<6; ++a){
        printf("for loop %d \n",a);
    }
    
/*--------------------------------------Do Loop-----------------------------------------------*/


/*  
    do {
        // the body of the loop
    }
    while (testExpression);
*/
    double num, sum =0;

    do{
        printf("Enter a number: ");scanf("%lf", &num);
        sum += num;
    }
    while (num != 0.0);

    printf("Sum = %.2lf", sum);
    
/*----------------------------------------------------------------------------------------------*/

    return 0;
}

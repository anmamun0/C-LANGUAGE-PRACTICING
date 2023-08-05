#include<stdio.h>
#include<stdbool.h>
int main(){
    int i =1, a,b,c;
/*
    while (testExpression) {
        // the body of the loop 
    }
*/
    while (i<= 5)
    {
        printf("%d \n", i);
        ++i;
    }
    
/*
    for (initializationStatement; testExpression; updateStatement)
    {
        // statements inside the body of loop
    }       
*/
    for (a=1;a<6; ++a){
        printf("for loop %d \n",a);
    }
    return 0;
}

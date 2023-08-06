#include<stdio.h>
#include<stdbool.h>
int main(){
    int a, b, c;
    printf("Enter Fast Number"); scanf("%d", &a);
    printf("Enter Second Number: "); scanf("%d",&b);
    printf("Enter Last Number : "); scanf("%d", &c);

    if (a>b && a>c){
        printf("Result: %d is big ", a);
    } 
    else if(b>c){
        printf("Result : %d is big ", b);
    }
    else{
        printf("Reselt : %d is big", c);
    }

    return 0;
}

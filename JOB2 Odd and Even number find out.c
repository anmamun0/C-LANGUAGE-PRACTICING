#include<stdio.h>
#include<stdbool.h>
int main(){
    int a;
    printf("Type a number "); scanf("%d",&a );

    if(a%2 == 0){
        printf("This is a Obb Number");
    }
    else if(a%2 == 1){
        printf("This is a Even Number ");

    }
    else{
        printf("Unknown number");
    }

    return 0;
}

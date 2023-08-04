#include<stdio.h>
#include<stdbool.h>
int main(){
    int i , a ,b=0;

    printf("Enter For add "); scanf("%d", &a);

    for (i = 0 ; i<=a; ++i){
        b += i;
    }
    printf("the result %d", b);

    // for (i = 5 ; i<11; ++i){
    //     printf("%d \n", i);
        
    // }

    return 0;
}

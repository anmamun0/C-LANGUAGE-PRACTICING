#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){

    int n, fast=0, second=1,i;
    printf("How many fibonatic number you want: ");scanf("%d",&n);

    for(i=3;i<=n; ++i){
        int add = fast + second;
        printf("%d   ",add);

        fast = second;
        second = add;
    }
  
    return 0;
}

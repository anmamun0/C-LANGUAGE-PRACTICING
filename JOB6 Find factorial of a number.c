#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
   int day , i  , result=1;

    printf("Enter a Number: "); scanf("%d",&day);
    for (i=1 ; i<=day; ++i ){
        result = result*i;
        printf("%d", i);
   
    }
    printf("Your fabonatic value: %d ", result);
    return 0;
}

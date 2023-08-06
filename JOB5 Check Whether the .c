#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
   int day;

    printf("Enter a year: "); scanf("%d",&day);
    if (day%400 == 0 || day%4 == 0 ){
        printf("This Year is a leap year. ");
    }
    else{
            printf(" %d Thats not leap year time ", day);
    }    
    return 0;
}

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int a,b,c;
    double d,e1,e2;
    printf("Enter fast number : ");scanf("%d",&a);
    printf("Enter second Number: "); scanf("%d",&b);
    printf("Enter Third NUmber : "); scanf("%d", &c);
    d = b*b-4*a*c;
    if (d>0){
        e1 = (-b+sqrt(d)) /(2*a);
        e2 = (-b-sqrt(d)) /(2*a);
        printf("The result is : %lf and %lf", e1, e2);
    }
    else if(d==0){
        e1= e2 = -b / (2*a);
        printf("The result is0 : %.1lf ", e1);
    }
    else{
        e1 = b/2*a;
        e2 = sqrt(-d)/ 2*a;
        printf("Your result is %.1lf+%.1lfi and %.1lf+%.1lfi",e1 ,e2,e1,e2);
    }
    return 0;
}

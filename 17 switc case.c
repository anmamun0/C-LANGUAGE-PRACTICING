#include<stdio.h>
#include<stdbool.h>
int main(){
    char opa;
    double a,b;
    int c=0;


    printf("Enter a n operation +-/* : ");scanf("%c",&opa);
    printf("Enter two value - ");scanf("%lf %lf", &a, &b);

    switch(opa)
    {
        case '+':
            printf("This was addition - %1.lf", a+b);
            break;
        case '-':
            printf("This is substaction - %.1lf", a-b);
            break;
        case '*':
            printf("This is multipling - %.1lf ", a*b);
            break;
        case '/':
            printf("THis is diviiton- %.1lf ", a/b);
            break;
    }

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    return 0;
}

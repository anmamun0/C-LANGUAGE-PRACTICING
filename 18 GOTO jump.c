#include<stdio.h>
#include<stdbool.h>
int main(){
    char opa, raw;
    double a,b;
    int c=0;


    jump:
    printf("Enter a n operation +-/* : ");scanf("%c",&opa);
    printf("Enter two value - ");scanf("%lf %lf", &a, &b);

    switch(opa)
    {
        case '+':
            printf("This was addition - %.1lf", a+b);
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
            default:
            printf("YOu oparation Error! try error ");
            scanf("%c", &raw);
            goto jump;
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

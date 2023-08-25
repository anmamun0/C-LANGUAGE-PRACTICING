#include <stdio.h>
#include <conio.h> // This is a header file for getch() on some systems

int main() 
{

    // int a, s= 0 , n;

    // printf("value of n: ");
    // scanf("%d", &n);

    // for(a = 1 ; a<= n; a++){
    //     s = s+a*a;
    // }
    // printf("Sum : %d ", s);
    // return 0 ; 
// --------------------------------------------------------------

    // int a=1, adding = 0 , n;

    // printf("value of n: "); scanf("%d", &n);

    // while(a<=n){
    //     adding = adding + a*a;

    //     ++a;
    // }
    // printf("Sum : %d", adding);

// --------------------------------------------------------------

    int a=1, adding = 0 , n;

    printf("value of n: "); scanf("%d", &n);

    do{
        adding = adding+ a*a;
        ++a;
    }
    while(a<=n);
    printf("YOue sum : %d", adding);


}

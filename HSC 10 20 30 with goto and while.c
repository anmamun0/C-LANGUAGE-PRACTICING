#include <stdio.h>
#include <conio.h> // This is a header file for getch() on some systems

int main() 
{
    // int i, s=0, n;
    // printf("Enter a number : "); scanf("%d",&n);
    // i = 10;

    // while(i<=n){
    //     s = s+i;
    //     printf("%d  ", i);
    //     i += 10;
    // }
    // printf("sum ; %d ", s);

  
    int i= 10,n, sum=0;
    printf("Enter the lats number when its will finished: "); scanf("%d",&n);

    jump:
        sum += i;
        i += 10; 
        printf("%d ", i); // its optional 
        if(i<=n)
            goto jump;

    printf("\nYour result %d ", sum);
    return 0;


}

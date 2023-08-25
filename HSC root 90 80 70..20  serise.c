#include <stdio.h>
#include <conio.h> // This is a header file for getch() on some systems

int main() 
{
    int sum=0, i=90, n=20;

    jump:
        sum += i*i;
        i -= 10;
        if (i>=n) goto jump;
    printf("%d ", sum);


}

#include <stdio.h>
#include <conio.h> // This is a header file for getch() on some systems

int main() 
{
//-----------------goto statment ---------------------------------
    int sum=0, i=90, n=20;

    jump:
        sum += i*i;
        i -= 10;
        if (i>=n) goto jump;
    printf("%d ", sum);

//---------------------while statment--------------------------
    int sum=0, i=90, n=20;

    while (i>=n)
    {
        sum += i*i;
        i-=10;
    }
    printf("Sum: %d ", sum);  

//--------------------for statment--------------------------
        int sum= 0, i=90, n =20;

    for(i; i>=n; i-=10){
        sum += i*i;
        printf("(%d)^2  ", i);

    }
    printf("Here is Sum; %d", sum);
}

}

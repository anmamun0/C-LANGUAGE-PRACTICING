#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
    char number;
    printf("Enter a character: ");scanf("%c ", &number);

    if(number>='a' && number<= 'z'){
        printf("This is a small caharter : %c", number);
    }
    else if(number>='A' && number<='Z'){
        printf("This is a capital chartacter: %c ", number);

    }
    else{
        printf("This is not a small or capital character : %d", number);
    }
   
    return 0;
}




#include<stdio.h>
#include<stdbool.h>
int main(){

    char c;

    printf("Enter a character");scanf("%c", &c);

    if (c=='a' || c=='e' || c =='i' || c =='o' || c=='u'||c=='A' || c=='E' || c =='I' || c =='O' || c=='U')
    {
        printf("Your chacter is a : vowel");
    }
    else{
        printf("YOur character IS :CONSONENT");
    }

 


    return 0;
}

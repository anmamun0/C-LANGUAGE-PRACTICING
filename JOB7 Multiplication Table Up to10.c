#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int i=0;

    while (i<=100)
    {
  
    int num, count;
    printf("Enter for muliple furmula: ");scanf("%d",&num);
    
    for (count =0; count<=10; ++count){
        printf("%d * %d = %d\n", num, count, num*count);
    }
    ++i;
    }
 
    return 0;
}
/*--------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int num, count;

    do{
  
    printf("Enter for muliple furmula: ");scanf("%d",&num);
    } while (num<=0);
  

    for (count =0; count<=10; ++count){
        printf("%d * %d = %d\n", num, count, num*count);
    }

    return 0;
}

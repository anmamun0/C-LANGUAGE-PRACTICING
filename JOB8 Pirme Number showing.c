#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){


// Prime Number serise want to show -

    int fast, last, result=0,n;

    printf("Enter Number when you want to start: ");scanf("%d",&fast);
    printf("Enter a number when you want to end ");scanf("%d", &last);

    for(fast;fast<=last;++fast){
        n =2;
        int is_prime = 1;

        for(n;n<fast;++n){
            if (fast%n == 0){
                is_prime =0;
                break;
            } 
        }
        if (is_prime){
            result+= fast;
            printf("%d ", fast);
        }
    }
    printf("\nYour final result is: %d ", result);

    return 0;
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){


// Prime Number serise want to show -
/ Prime Number serise want to show -

    int fast, last, flag,n=2;
    printf("Enter Number when you want to start: ");scanf("%d",&fast);
    printf("Enter a number when you want to end ");scanf("%d", &last);
    printf("YOur result is: ");
    while (fast<=last)
    {   flag = 0;
        if (fast<=1){
            ++fast;
            continue;
        }
        for(n; n<=fast / 2; ++n){
            if (fast%n ==0){
                flag =1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", fast);
        }
        ++fast;
    }
}

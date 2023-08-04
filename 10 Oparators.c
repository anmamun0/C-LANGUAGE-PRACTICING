#include<stdio.h>
#include<stdbool.h>
int main(){


int a = 10 , b = 20 , c , x = 10 , y= 20;
float d = 100.5  ;
double e = 500.6;


printf("%d \n", --a);
printf("%f \n", ++d);
printf("%lf \n", ++e);

x += y;
printf("%d \n", x);
printf("%d %d \n", y, x);

int o = 5, n = 5, m = 10;
printf("%d ",o>n );
printf("%d", o==n);


return 0;
}

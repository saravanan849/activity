#include<stdio.h>
int main( )
{
    int a,b,c,biggest;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    biggest=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("biggest number is %d",biggest);
    return 0;
}

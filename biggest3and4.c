#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("biggest number is %d",a);
        }
        else
        {
            printf("biggest number is %d",c);
        }
    }
    else if(b>c)
    {
        printf("biggest number is %d",b);
    }
    else
    {
    printf("biggest number is %d",c);

    }

    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if((w>x)&(w>y)&(w>z))
    {
        printf("biggest number is %d",w);
    }
    else if((x>y)&(x>z))
    {
        printf("biggest number is %d",x);
    }
    else if(y>z)
    {
        printf("biggest number is %d",y);
    }
    else{
        printf("biggest number is %d",z);
    }
}



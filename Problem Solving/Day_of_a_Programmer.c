#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y>1918&&y<2701)
    {
        if((y%400==0)||(y%4==0&&y%100!=0))
           {
                printf("12.09.%d",y);
           }
        else
        {
            printf("13.09.%d",y);
        }
    }
    else if(y>1699&&y<1919)
    {
        if(y%4==0)
        {
            printf("12.09.%d",y);
        }
        else if(y==1918)
        {
            printf("26.09.1918");
        }
        else
        {
            printf("13.09.%d",y);
        }

    }
}

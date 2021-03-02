#include<stdio.h>
int main()
{
    int n,k ,bill[100000],b,total=0,i,ret;
    scanf("%d",&n);
    scanf("%d",&k);
    for( i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if (k!=i)
         {


            total=total+bill[i];


        }
    }
    total=total/2;
     ret=b-total;
    if(b>total)
    {

        printf("%d",ret);
    }
    else if(b=total)
    {
        printf("Bon Appetit");
    }
}

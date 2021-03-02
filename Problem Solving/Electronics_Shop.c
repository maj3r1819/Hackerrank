#include<stdio.h>
int main()
{
    int b, n,m,i,j;
    scanf("%d %d %d",&b,&n,&m);
    int keyboards[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&keyboards[i]);
    }
    int boards[m];
    for( i=0;i<m;i++)
    {
        scanf("%d",&boards[i]);
    }
    int max=-1;
    for( i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(keyboards[i]+boards[j]<=b&&keyboards[i]+boards[j]>max)
            {
                max=keyboards[i]+boards[j];
            }
        }
    }
    printf("%d",max);

return 0;

    }





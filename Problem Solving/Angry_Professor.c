#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,k,j,count=0;
        scanf("%d",&n);
        scanf("%d",&k);
        int ar[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
         for(j=0;j<n;j++)
        {
            if(ar[j]<1)
            {
                count++;
            }
            else
                continue;

        }

        if(count>=k)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");


    }
    return 0;
}

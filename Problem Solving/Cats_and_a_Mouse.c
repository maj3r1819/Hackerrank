#include<stdio.h>
#include<math.h>
int main()
{

    int q,i;
    scanf("%d",&q);
    int catA,catB,mouseC;
    for( i=0;i<q;i++)
    {
        scanf("%d %d %d",&catA,&catB,&mouseC);
        int m1,m2;
        m1=abs(mouseC-catA);
        m2=abs(mouseC-catB);
        if(m1>m2)
        {
            printf("Cat B\n");
        }
        else if(m2>m1)
        {
                        printf("Cat A\n");

        }
        else if(m2==m1)
        {
                        printf("Mouse C\n");

        }


    }


    return 0;
}

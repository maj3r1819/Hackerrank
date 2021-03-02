#include<stdio.h>
//#define games 1000
int main()
{
    int games;
    scanf("%d",&games);
    int scores[games];
    for(int i=0;i<games;i++)
    {
        scanf("%d",&scores[i]);
    }
   int max=scores[0],min=scores[0],count1=0,count2=0;
   for(int i=0;i<games;i++)
   {
       if(scores[i]>max)
       {
           max=scores[i];
           count1++;
       }
       else if(scores[i]<min)
       {
           min=scores[i];
           count2++;
       }
   }
   printf("%d %d",count1,count2);
}

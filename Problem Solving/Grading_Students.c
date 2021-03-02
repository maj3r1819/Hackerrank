#include<stdio.h>
int main()
{
    int n;
scanf("%d",&n);
int i,j,ar[n],m=0,y,z,a,b,c,d,e;
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
 m=ar[i]%10;
 if(ar[i]>=40)
 {
     if(m==0||m==5)
{
    printf("%d\n",ar[i]);
}
else if(m>5)
{
   y=ar[i]+10-m;
   a=y-ar[i];
   if(a<3)
    printf("%d\n",y);
   else if(a>=3)
        printf("%d\n",ar[i]);
}
else if(m<5)
{
   z=ar[i]+5-m;
   b=z-ar[i];
   if(b<3)
    printf("%d\n",z);
   else if(b>=3)
        printf("%d\n",ar[i]);
}

}
else if(ar[i]<40)
{
 c=ar[i]%10;
   if(c==0||c==5)
{
    printf("%d\n",ar[i]);
}
if(ar[i]<36&&c!=0&&c!=5)
    printf("%d\n",ar[i]);
if(ar[i]>=36&&c!=0&&c!=5)
{
    d=ar[i]+10-c;
    e=d-ar[i];
    if(e<3)
    printf("%d\n",d);
   else if(e>=3)
        printf("%d\n",ar[i]);


}


}
 }


}

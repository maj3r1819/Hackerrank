// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar)
 {
int i,j,temp,count=0,max=0;

for(i=0;i<ar_count;i++)
{
    if(ar[i]>max)
    {
        max=ar[i];
    }
}
for(i=0;i<ar_count;i++)
{
    if(ar[i]==max)
    {
        count++;
    }
}


return count;
}

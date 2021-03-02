// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {
    int i,count1=0,count2=0,count3=0;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
        {
            count1++;
        }
        else if(arr[i]<0)
        {
            count2++;
        }
        else if(arr[i]==0)
        {
            count3++;
        }
    }
    double pos=(double)count1/(double)arr_count;
    double neg=(double)count2/(double)arr_count;
    double zer=(double)count3/(double)arr_count;
    printf("%lf\n",pos);
    printf("%lf\n",neg);
    printf("%lf\n",zer);


}

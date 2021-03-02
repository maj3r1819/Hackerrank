#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmpfun(const void *x,const void *y){
    return *(int *)x-*(int *)y;

}
int main() {


    long long int a[5],sum=0;
    int i;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    qsort(a,5,sizeof(long long int),cmpfun);
    printf("%lld %lld",sum-a[4],sum-a[0]);
    return 0;
}

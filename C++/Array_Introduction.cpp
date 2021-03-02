#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int i, ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=n-1;i>-1;i--)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}

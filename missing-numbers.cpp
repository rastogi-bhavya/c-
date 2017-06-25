// https://www.hackerrank.com/challenges/missing-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    int a[10001];
    for(i=0;i<10001;i++)
        {
        a[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>k;
        a[k]--;
    }
    cin>>m;
    for(i=0;i<m;i++)
        {
        cin>>k;
        a[k]++;
    }
    for(i=0;i<10001;i++)
        {
        if(a[i]>0)
            {
            //for(j=0;j<a[i];j++)
             //   {
                cout<<i<<" ";
           // }
        }
    }

    return 0;
}

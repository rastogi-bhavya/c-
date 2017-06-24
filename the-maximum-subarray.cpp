// https://www.hackerrank.com/challenges/maxsubarray

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    int sum,m1,m2;
    int t;
    cin>>t;
    while(t--)
        {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            {
            cin>>a[i];
        }
        int flag=0;
        for(i=0;i<n;i++)
            {
            if(a[i]>=0)
                {
                flag=1;
                break;
            }
        }
        if(flag)
            {
            m2=0;
            for(i=0;i<n;i++)
                {
                if(a[i]>0)
                    {
                    m2+=a[i];
                }
            }
            sum=0;
            m1=0;
            for(i=0;i<n;i++)
                {
                sum+=a[i];
                if(sum<0)
                    {
                    sum=0;
                }
                if(sum>m1)
                    {
                    m1=sum;
                }
            }
        }
        else
            {
            sum=a[0];
            for(i=0;i<n;i++)
                {
                if(a[i]>sum)
                    {
                    sum=a[i];
                }
            }
            m1=sum;
            m2=sum;
        }
        cout<<m1<<" "<<m2<<endl;
    }

    return 0;
}

// https://www.hackerrank.com/challenges/icecream-parlor

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    int t;
    cin>>t;
    while(t--)
        {
        cin>>m>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l=0,r=n-1;
        while(l!=r)
            {
            if(b[l]+b[r]==m)
                {
                break;
            }
            else if(b[l]+b[r]>m)
                {
                r--;
            }
            else
                {
                l++;
            }
        }
        int x,y;
        for(i=0;i<n;i++)
            {
            if(a[i]==b[l])
                {
                x=i+1;
                break;
            }
        }
        for(i=0;i<n;i++)
            {
            if(a[i]==b[r]&&i+1!=x)
                {
                y=i+1;
                break;
            }
        }
        if(x>y)
            {
            cout<<y<<" "<<x;
        }
        else
            {
            cout<<x<<" "<<y;
        }
        cout<<endl;
    }
    return 0;
}

// https://www.hackerrank.com/challenges/kruskalmstrsub

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main ()
{
    int i,j,k,l,m,n,t,x,y,r,s;
    long long int sum=0;
    cin>>n>>m;
    int d[n],c[n],a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=1050010;
        }
        d[i]=1050010;
        a[i][j]=0;
        c[i]=0;
    }
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>r;
        x--;
        y--;
        if(a[x][y]>r)
        {
            a[x][y]=r;
            a[y][x]=r;
        }
    }
    cin>>s;
    s--;
    d[s]=0;
    int count = n;
    while (count--)
    {
        int temp=1050010,pos=-1;

        for(i=0;i<n;i++)
        {
            if(d[i]<=temp && c[i]==0)
            {
                temp=d[i];
                pos=i;
            }
        }

        c[pos]=1;

        for(i=0;i<n;i++)
        {
            if(c[i]==0)
            {
                d[i]=min(d[i],a[pos][i]);
            }
        }
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum+=d[i];
        //cout<<d[i]<<" ";
    }
    cout<<sum<<endl;
}

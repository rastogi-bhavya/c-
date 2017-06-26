// https://www.hackerrank.com/challenges/bfsshortreach

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
        {
        cin>>n>>m;
        int c[n],d[n];
        for(i=0;i<n;i++)
            {
            c[i]=0;
            d[i]=1010;
        }
        int a[n][n];
        for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                a[i][j]=0;
            }
        }
        int x,y;
        for(i=0;i<m;i++)
            {
            cin>>x>>y;
            a[x-1][y-1]=1;
            a[y-1][x-1]=1;
        }
        int s;
        cin>>s;
        s--;
        d[s]=0;
        c[s]=1;
        queue<int> Q;
        Q.push(s);
        while(Q.size()!=0)
            {
            int u=Q.front();
            Q.pop();
            for(i=0;i<n;i++)
                {
                if(a[u][i]==1&&c[i]==0)
                    {
                    c[i]=1;
                    d[i]=d[u]+1;
                    Q.push(i);
                }
            }
            c[u]=2;

        }
        for(i=0;i<n;i++)
            {
            if(d[i]==1010)
                {
                d[i]=-1;
            }
            else
                {
                d[i]=d[i]*6;
            }
        }
        for(i=0;i<n;i++)
            {
            if(i!=s)
                {
                cout<<d[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

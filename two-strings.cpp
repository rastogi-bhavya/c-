// https://www.hackerrank.com/challenges/two-strings

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int i,j,k,l,m,n;
    int a[26];
    string b,c;
    cin>>t;
    while(t--)
        {
        int count=0;
        cin>>b>>c;
        for(i=0;i<26;i++)
            {
            a[i]=0;
        }
        for(i=0;i<b.size();i++)
            {
            if(a[b[i]-'a']==0)
                {
                a[b[i]-'a']=1;
                count++;
            }
            if(count==26)
                {
                break;
            }
        }
        int flag=0;
        for(i=0;i<c.size();i++)
            {
            if(a[c[i]-'a']==1)
                {
                flag=1;
                break;
            }
        }
        if(flag)
            {
            cout<<"YES\n";
        }
        else
            {
            cout<<"NO\n";
        }
    }
    return 0;
}

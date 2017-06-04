// https://www.hackerrank.com/challenges/anagram

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i,j,k,l,m,n;
    int t;
    int a[26],b[26];
    string c;
    cin>>t;
    while(t--)
        {
        cin>>c;
        if(c.size()%2==0)
            {
            for(i=0;i<26;i++)
                {
                a[i]=0;
                b[i]=0;
            }
            for(i=0;i<c.size()/2;i++)
                {
                a[c[i]-'a']++;
            }
            for(i=c.size()/2;i<c.size();i++)
                {
                b[c[i]-'a']++;
            }
            for(i=0;i<26;i++)
                {
                b[i]=max(0,b[i]-a[i]);
            }
            k=0;
            for(i=0;i<26;i++)
                {
                k=k+b[i];
            }
            cout<<k<<endl;
        }
        else
            {
            cout<<-1<<endl;
        }
    }
    return 0;
}

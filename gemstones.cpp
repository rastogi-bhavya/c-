// https://www.hackerrank.com/challenges/gem-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    cin>>n;
    int a[26],b[26];
    for(i=0;i<26;i++)
        {
        a[i]=0;
        b[i]=0;
    }
    for(j=0;j<n;j++)
        {
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
            {
            b[s[i]-'a']=1;
        }
        for(i=0;i<26;i++)
            {
            a[i]=a[i]+b[i];
            b[i]=0;
        }
    }
    int count=0;
    for(i=0;i<26;i++)
        {
        if(a[i]==n)
            {
            count++;
        }
    }
    cout<<count;
    return 0;
}

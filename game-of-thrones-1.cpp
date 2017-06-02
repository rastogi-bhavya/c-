// https://www.hackerrank.com/challenges/game-of-thrones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

    string s;
    cin>>s;

    int flag = 0;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    int i,j,k,l,m,n;
    int a[26];
    for(i=0;i<26;i++)
        {
        a[i]=0;
    }
    for(i=0;i<s.size();i++)
        {
        a[s[i]-'a']++;
    }
    int count=0;
    for(i=0;i<26;i++)
        {
        if(a[i]%2==1)
            {
            count++;
        }
    }
    if(count>1)
        {
        flag=0;
    }
    else
        {
        flag=1;
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

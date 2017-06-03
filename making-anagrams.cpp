// https://www.hackerrank.com/challenges/making-anagrams

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    string A,B;
    int a[26],b[26];
    for(i=0;i<26;i++)
        {
        a[i]=0;
        b[i]=0;
    }
    cin>>A>>B;
    for(i=0;i<A.size();i++)
        {
        a[A[i]-'a']++;
    }
    for(i=0;i<B.size();i++)
        {
        b[B[i]-'a']++;
    }
    int count=0;
    for(i=0;i<26;i++)
        {
        count=count+abs(a[i]-b[i]);
    }
    cout<<count;
    return 0;
}

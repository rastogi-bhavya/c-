// https://www.hackerrank.com/challenges/the-love-letter-mystery

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
    string s;
    while(t--)
        {
        cin>>s;
        int count=0;
        for(i=0;i<s.size()/2;i++)
            {
            count+=abs(int(s[i]-s[s.size()-1-i]));
        }
        cout<<count<<endl;
    }
    return 0;
}

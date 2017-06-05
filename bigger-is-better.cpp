// https://www.hackerrank.com/challenges/bigger-is-greater

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(next_permutation(s.begin(),s.end()))
        {
            cout<<s;
        }
        else
        {
            cout<<"no answer";
        }
        cout<<endl;
    }
    return 0;
}

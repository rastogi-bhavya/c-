// https://www.hackerrank.com/challenges/sansa-and-xor

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
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            {
            cin>>a[i];
        }
        k=0;
        if(n%2!=0)
            {
            for(i=0;i<n;i=i+2)
                {
                k=k^a[i];
            }
        }
        cout<<k<<endl;
    }
    return 0;
}

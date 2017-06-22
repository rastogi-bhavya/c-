// https://www.hackerrank.com/challenges/sherlock-and-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n,t;
    cin>>t;
    int suml=0,sumr=0;
    while(t--)
        {
        int flag=0;
        cin>>n;
        int a[n];
        suml=0;
        sumr=0;
        for(i=0;i<n;i++)
            {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
            {
            sumr+=a[i];
        }
        for(i=0;i<n;i++)
            {
            if(sumr==suml)
                {
                flag=1;
                break;
            }
            else
                {
                suml+=a[i];
                sumr-=a[i+1];
            }
        }
        if(flag)
            {
            cout<<"YES";
        }
        else
            {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}

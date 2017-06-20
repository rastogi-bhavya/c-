// https://www.hackerrank.com/challenges/counter-game

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,l,m,n;
    int t;
    unsigned long long int a,b;
    cin>>t;
    while(t--)
        {
        cin>>a;
        k=0;
        string s;
        while(a)
        {
            if(a%2==0)
            {
                s.insert(s.begin(),'0');
            }
            else
            {
                s.insert(s.begin(),'1');
            }
            a=a/2;
        }

        int countZero=0,countOne=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                countZero++;
            }
            else
            {
                break;
            }
        }
        for(j=0;j<i;j++)
        {
            if(s[j]=='1')
            {
                countOne++;
            }
        }

        k=(countZero+countOne)%2;

        if(k==0)
        {
            cout<<"Richard";
        }
        else
        {
            cout<<"Louise";
        }
        cout<<endl;
    }
    return 0;
}

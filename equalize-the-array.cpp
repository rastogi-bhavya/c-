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
    int a[n];
    for(i=0;i<n;i++){

        cin>>a[i];
    }

    sort(a,a+n);

    i = 0;
    int max = 1;
    while(i!=n-1) {
        m = 1;
        for(;i<n-1;i++){

            if(a[i] == a[i+1]){
                m++;
            }
            else{
                i++;
                break;
            }
        }
        if(max < m){

            max = m;
        }
    }

    cout<<n-max;
    return 0;
}

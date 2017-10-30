#include <iostream>

using namespace std;

int sum(int d, int n) {

    int res = n*(n+1)/2;

    if (d == 1) {

        return res;
    }
    else {

        return sum(d-1, res);
    }
}

int main () {

    int t;

    cin>>t;

    while(t--) {

        int n, d;

        cin>>d>>n;

        cout<<sum(d, n)<<endl;
    }
}

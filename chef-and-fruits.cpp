#include <iostream>

using namespace std;

int main () {

    int t;

    cin>>t;

    while(t--) {

        int k,m,n;

        cin>>m>>n>>k;

        int x = m-n;

        if (x < 0) {

            x = -x;
        }

        x = x - k;

        if (x < 0) {

            x = 0;
        }

        cout<<x<<endl;
    }
}

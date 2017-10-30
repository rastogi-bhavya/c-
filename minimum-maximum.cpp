#include <iostream>

using namespace std;

int main () {

    int t;

    cin>>t;

    while (t--) {

        long n, m;
        cin>>n;

        long min = 1000000;

        for (int i = 0; i < n; i++ ) {

            cin>>m;

            if (min > m) {

                min = m;
            }
        }

        cout<< min * (n-1)<<endl;
    }
}

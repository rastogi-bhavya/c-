#include <iostream>

using namespace std;

int main () {

    int t;

    cin>>t;

    while(t--) {

        int n;

        cin>>n;

        int i;

        if(n%2 == 0) {

            for(i=1;i<=n/2;i++) {

                cout<<i*2<<" "<<2*i - 1<<" ";
            }
        }

        else {

            for(i=1;i<=n/2 - 1;i++) {

                cout<<i*2<<" "<<2*i - 1<<" ";
            }

            cout<<n-1<<" "<<n<<" "<<n-2;
        }

        cout<<endl;
    }
}

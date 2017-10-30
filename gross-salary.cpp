#include <iostream>

using namespace std;

int main () {

    int t;

    cin>>t;

    while (t--) {

        int s;

        cin>>s;

        if (s < 1500) {

            cout<<s * 2;
        }

        else {

            if (s%100 == 0) {

                cout<< (s/100*98) + s + 500;
            }
            else {

                float ss = s * 0.98;

                ss = ss + s + 500;

                cout<<ss;
            }
        }

        cout<<endl;
    }
}

#include <iostream>

using namespace std;

int main () {

    int t;

    cin>>t;

    int n, p, c, h, x, i;

    while(t--) {

        cin>>n>>p;

        c = 0;

        h = 0;

        for(i = 0; i < n; i++ ) {

            cin>>x;

            if(x >= p/2) {

                c++;
            }

            else if (x <= p/10) {

                h++;
            }
        }

        if(c == 2 && h == 1) {

            cout<<"yes";
        }
        else {

            cout<<"no";
        }
        cout<<endl;
    }
}

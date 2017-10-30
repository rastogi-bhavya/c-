#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int t;

    cin>>t;

    cout << fixed << setprecision(6);

    while (t--) {

        double q, p, fp;
        cin>>q>>p;

        if (q > 1000) {

            p = p * 0.9;
        }

        fp = q * p * 1.000000;

        cout<<setprecision(6)<<fp<<endl;

    }
}

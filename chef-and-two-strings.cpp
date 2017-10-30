#include <iostream>
#include <string>

using namespace std;

int main () {

    int t;
    cin>>t;
    while (t--) {

        string a, b;
        cin>>a>>b;

        int q = 0;
        int d = 0;

        int i,j,k,l;

        for (i = 0; i < a.size(); i++) {

            if (a[i] == '?' || b[i] == '?') {

                q++;
            }

            else if (a[i] != b[i]) {

                d++;
            }
        }

        cout<<d<<" "<<d+q<<endl;
    }
}

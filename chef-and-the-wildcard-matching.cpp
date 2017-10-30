#include <iostream>
#include <string>

using namespace std;

int main () {

    int t;
    cin>>t;
    while (t--) {

        string x, y;

        cin>>x>>y;

        int flag = 1;

        for (int i = 0; i < x.size(); i++) {

            if (x[i] != y[i] && x[i] != '?' && y[i] != '?') {

                flag = 0;
                break;
            }
        }

        if(flag) {

            cout<<"Yes"<<endl;
        }
        else {

            cout<<"No"<<endl;
        }
    }
}

#include <iostream>

using namespace std;

int main () {

    int t;
    cin>>t;
    while (t--) {

        float h, c, ts;

        cin>>h>>c>>ts;

        int g = 5;

        if (h > 50 && c < 0.7 && ts > 5600){

            g = 10;
        }
        else if (h > 50 && c < 0.7){

            g = 9;
        }
        else if (c < 0.7 && ts > 5600){

            g = 8;
        }
        else if (h > 50 && ts > 5600){

            g = 7;
        }
        else if (h > 50 || c < 0.7 || ts > 5600){

            g = 6;
        }

        cout<<g<<endl;
    }
}

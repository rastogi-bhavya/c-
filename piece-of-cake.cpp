#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    int t;

    cin>>t;

    while (t--) {

        string s;

        cin>>s;

        int a[26];

        int i,j,k,l,m;

        for (i = 0; i < 26; i++) {

            a[i] = 0;
        }

        for (i = 0; i < s.size(); i++ ) {

            a[s[i] - 'a']++;
        }

        int flag = 0;

        for (i = 0; i < 26 ; i++ ) {

            if (a[i] == s.size()-a[i]) {

                flag = 1;
                break;
            }
        }

        if (flag) {

            cout<<"YES"<<endl;
        }
        else {

            cout<<"NO"<<endl;
        }
    }
}

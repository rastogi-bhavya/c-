#include <iostream>
#include <string>

using namespace std;

int main () {

    int t;

    cin>>t;

    while(t--) {

        int l, r;
        cin>>l>>r;

        long int sum = 0;

        for (int i = l; i <= r; i++) {

            string s;
            int x = i;
            while(x) {

                char y = x%10 + 48;
                s.append(1, y);
                x = x/10;
            }

            int flag = 1;

            for (int j = 0; j < s.size()/2; j++) {

                if(s[j] != s[s.size()-j-1]) {

                    flag = 0;
                    break;
                }
            }

            if (s.size() == 1){

                flag = 1;
            }

            if (flag) {

                sum = sum + i;
            }
        }

        cout<<sum<<endl;
    }
}

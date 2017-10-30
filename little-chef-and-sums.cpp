#include <iostream>

using namespace std;

int main () {

    int t,i,j,k,n;

    cin>>t;

    while(t--) {

        cin>>n;

        int a[n];

        long int sum = 0;

        int min = 0;

        for(i=0;i<n;i++) {

            cin>>a[i];

            sum+=a[i];

            if(a[i]<a[min]) {

                min = i;
            }
        }

        cout<<min+1<<endl;
    }
}

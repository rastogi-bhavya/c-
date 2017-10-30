#include <iostream>

using namespace std;

int main () {

    int n, o, e;
    o=0;
    e=0;
    int i,j,k,l;
    cin>>n;
    for(i=0;i<n;i++){

        cin>>j;
        if(j%2 == 0) {

            e++;
        }
        else {

            o++;
        }
    }

    if (e > o){

        cout<<"READY FOR BATTLE";
    }
    else {

        cout<<"NOT READY";
    }
}

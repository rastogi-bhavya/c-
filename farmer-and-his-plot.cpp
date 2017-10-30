#include <iostream>

using namespace std;

int min (int a, int b) {

	if(a>b) {

		return b;
	}
	return a;
}

int main () {

	int t;

	cin>>t;

	while(t--) {

		int n,m;

		cin>>n>>m;

		int k = min (m ,n);

		while (k > 1) {

			if(m%k == 0 && n%k == 0) {

				break;
			}
			 k--;
		}

		cout<<m*n/(k*k)<<endl;
	}
}

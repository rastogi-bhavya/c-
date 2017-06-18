#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;

    long i,j,k,l,m;

    long aCount = 0;

    k = n/s.length();

    l = n%s.length();

    j = 0;

    for(i = 0;i<s.length();i++){

        if(s[i] == 'a'){

            aCount++;
        }

        if(i<l){

            j++;
        }
    }

    cout<<aCount*k+j;
    return 0;
}

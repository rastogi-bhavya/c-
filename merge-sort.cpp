#include <iostream>

using namespace std;

void merge(int a[], int s, int e) {

    int m = (s+e)/2;

    int l1, l2;

    l1 = m - s + 1;

    l2 = e - m;

    int i,j,k;

    int l[l1], r[l2];

    for(i=0; i<l1; i++) {

        l[i] = a[s+i];
    }

    for(j=0; j<l2; j++) {

        r[j] = a[m+1+j];
    }

    i = 0;

    j = 0;

    k = s;

    while(i < l1 && j < l2) {

        if(l[i] < r[j]) {

            a[k] = l[i];
            i++;
        }

        else {

            a[k] = r[j];
            j++;
        }

        k++;
    }

    for(;i<l1;i++) {

        a[k] = l[i];
        k++;
    }

    for(;j<l2;j++) {

        a[k] = r[j];
        k++;
    }
}

void mergeSort (int a[], int s, int e) {

    if(s < e) {

        int m = (s+e)/2;

        mergeSort(a, s, m);
        mergeSort(a, m+1, e);

        merge(a, s, e);
    }
}

int main () {

    int n;

    cin>>n;

    int i;

    int a[n];

    for(i=0;i<n;i++) {

        cin>>a[i];
    }

    mergeSort(a, 0, n-1);

    for(i=0;i<n;i++) {

        cout<<a[i]<<" ";
    }
}

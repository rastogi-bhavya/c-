#include <iostream>

using namespace std;

#define size 1000

int n;

void printArray (int a[], int n) {

    int i;

    cout<<"[";
    for(i=0;i<n;i++) {

        cout<<a[i];
        if(i!= n-1) {

            cout<<",";
        }

    }
    cout<<"]";
    cout<<endl;
}

void swap (int a[], int i, int j) {

    int k = a[i];
    a[i] = a[j];
    a[j] = k;
}

int partition(int a[], int l, int r) {

    int i,j;

    int p = a[r];

    i=l;

    for(j=l; j <= r-1; j++) {

        if(a[j] < p) {

            swap(a, i, j);
            i++;
        }
    }

    swap(a, i, r);
    return i;
}

void quickSort(int a[], int l, int r) {

    if(l<r) {

        int  p = partition(a, l, r);
        // printArray(a, l, r);

        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
}

int main () {

    int a[size];

    cin>>n;

    int i,j,k,l,m;

    for(i=0;i<n;i++) {

        cin>>a[i];
    }

    quickSort(a, 0, n-1);

    printArray(a, n);
}

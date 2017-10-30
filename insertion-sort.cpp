#include <iostream>

using namespace std;

struct node {

    int d;
    node *n;
};

void display (node *head) {

    node *h = new node;

    h = head;

    cout<<"[";

    while(h) {

        cout<<h->d;

        if(h->n) {

            cout<<",";
        }

        h = h->n;
    }

    cout<<"]"<<endl;
}

node* insert (node *h, int x) {

    node *p = new node;

    p->d = x;
    p->n = NULL;

    node *q = new node;

    if(h == NULL || h->d > x) {

        p->n = h;
        h = p;
    }

    else {

        q = h;

        while(q->n != NULL && q->n->d < x) {

            q = q->n;
        }

        p->n = q->n;
        q->n = p;
    }

    return h;
}

int main () {

    int n;

    cin>>n;

    node *h = new node;

    h = NULL;

    int x,i;

    for(i=0; i<n; i++) {

        cin>>x;

        h = insert(h, x);
    }

    display(h);
}

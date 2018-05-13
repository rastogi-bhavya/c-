
#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

void displayData (node *head) {
	node *start = new node;
	start = head;

	while(start) {
		cout<<start->data<<" ";
		start = start->next;
	}
}

void appendData (int x, node **head_ptr) {
	node *p = new node;

	p->data = x;
	p->next = NULL;

	node *start = new node;

	if(*head_ptr == NULL) {
		*head_ptr = p;
	}

	else  {
		start = *head_ptr;
		while(start->next) {
			start = start->next;
		}
		start->next = p;
	}
}

void pushData(int x, node** head_ptr) {
	node *p = new node;
	p->data = x;
	p->next = NULL;

	if(*head_ptr == NULL) {
		*head_ptr = p;
	} else {
		p->next = *head_ptr;
		*head_ptr = p;
	}
}

void deleteData (int x, node** head_ptr) {
    if (*head_ptr) {
        node* p = new node;
        node* q = new node;

        q = *head_ptr;
        p = q->next;

        if (q->data == x) {
            *head_ptr = q->next;
        } else {

            while(p->data != x && p->next) {
                q = p;
                p = p->next;
            }

            if(p->data == x) {
                q->next = p->next;
            } else {
                cout<<"Data Not Found";
            }
        }
        cout<<"Data Deleted";
    } else {
        cout<<"Empty List";
    }
    cout<<endl;
}

int  main () {
	node *head = NULL;

	int n;

	cin>>n;

	while(n--) {
		int x;
		cin>>x;
		pushData(x, &head);
	}

	displayData(head);

    cin>>n;

    deleteData(n, &head);

    displayData(head);
}
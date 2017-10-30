#include <iostream>

using namespace std;

#define nodeSize 26

struct trie {

	trie *node[nodeSize];
	int isLeaf;
};

char temp[100];

int tempLen = 0;

void insert (trie *root, char *s) {

	int i,j,k,l,m,n;

	for(i=0;s[i]!='\0';i++) {

		if(root->node[s[i]-'a'] == NULL) {

			root->node[s[i]-'a'] = new trie;

			for(j=0;j<nodeSize;j++) {

				root->node[s[i]-'a']->node[j] = NULL;
				root->node[s[i]-'a']->isLeaf = 0;
			}
		}

		root = root->node[s[i]-'a'];
	}

	root->isLeaf = 1;
}

int find (trie *root, char *s) {

	int flag = 1;

	int i;

	for(i=0;s[i]!='\0';i++) {

		if(root->node[s[i]-'a'] == NULL) {

			flag = 0;

			break;
		}

		root = root->node[s[i]-'a'];
	}

	if(root->isLeaf != 1) {

		flag = 0;
	}

	return flag;
}

void print (trie *root) {

	int i;

	if(root->isLeaf == 1) {

		for(i=0;i<tempLen;i++) {

			cout<<temp[i];
		}
		cout<<endl;
	}

	for(i=0;i<nodeSize;i++) {

		if(root->node[i] != NULL) {

			temp[tempLen] = 'a' + i;
			tempLen++;
			print(root->node[i]);
			tempLen--;
		}
	}
}


int main () {

	int i,j,k,l,m,n,t;

	cin>>t;

	trie *root = new trie;

	for(i=0;i<nodeSize;i++) {

		root->node[i] = NULL;
	}

	root->isLeaf = 0;

	while(t--) {

		char *s = new char;

		cin>>s;

		insert(root, s);


	}

	// cin>>t;

	// while(t--) {

	// 	char *s = new char;

	// 	cin>>s;

	// 	cout<<find(root, s)<<endl;
	// }

	print(root);
}
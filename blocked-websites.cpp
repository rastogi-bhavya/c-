#include <iostream>

using namespace std;

#define trieNodeSize 26

struct trie {

	trie *node[trieNodeSize];
	int isBlockedLeaf;
	int isUnblockedLeaf;
	int isBlocked;
	int isUnblocked;
};

void trieInitialize (trie *root) {

	int i;

	for(i=0;i<trieNodeSize;i++) {

		root->node[i] = NULL;
	}

	root->isBlockedLeaf = 0;
	root->isUnblockedLeaf = 0;
	root->isBlocked = 0;
	root->isUnblocked = 0;
}

void insert (trie *root, char *s, char c) {

	int i,j,k,l,m,n;

	for(i=0;s[i]!='\0';i++) {

		if(root->node[s[i]-'a'] == NULL) {

			root->node[s[i]-'a'] = new trie;

			trieInitialize(root->node[s[i]-'a']);
		}

		root = root->node[s[i]-'a'];

		if(c == '+') {

			root->isUnblocked = 1;
		}
		else if (c == '-') {

			root->isBlocked = 1;
		}
	}

	if(c == '+') {

		root->isUnblockedLeaf = 1;
	}
	else if (c == '-') {

		root->isBlockedLeaf = 1;
	}

}

char *x = new char;

int xLen = 0;

int xCount = 0;

char *y = new char;

int yLen = 0;

void copy () {

	int i;

	for(i=0;i<yLen;i++) {

		x[xLen] = y[i];
		xLen++;
	}
	x[xLen] = '\n';
	xLen++;
	xCount++;
}

int solve (trie *root) {

	int i;
	int flag = 1;

	if(root->isBlocked == 1 && root->isUnblocked == 0) {

		copy();
		return flag;
	}

	else if(root->isBlocked == 1 && root->isUnblocked == 1 && root->isBlockedLeaf == 1) {

		return 0;
	}

	for(i=0;i<trieNodeSize;i++) {

		if(root->node[i] != NULL) {

			y[yLen] = 'a' + i;
			yLen++;
			flag = solve(root->node[i]);

			if(!flag) {

				return flag;
			}
			yLen--;
		}
	}

	return flag;
}

int main () {

	int t;

	cin>>t;

	char c;
	char *s = new char;

	trie *root = new trie;

	trieInitialize(root);

	while(t--) {

		cin>>c;

		cin>>s;

		insert(root, s, c);
	}

	int flag = solve(root);

	if(!flag) {

		cout<<-1;
	}
	else {

		int i;
		
		cout<<xCount<<endl;

		x[xLen] = '\0';
		xLen++;

		cout<<x;
	}
}
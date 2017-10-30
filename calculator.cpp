#include <iostream>

using namespace std;

int len (char *s) {

    int i = 0;

    for(i=0;s[i]!=0;i++) {}

    return i;
}

char* reverse(char *s) {

    int l = len(s);

    int i = 0;

    for(i=0;i<l/2;i++) {

        char v = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = v;
    }

    return s;
}

char* add (char *a, char *b) {

    a = reverse(a);
    b = reverse(b);

    int aLen = len(a);
    int bLen = len(b);

    char *c = new char;

    int carry = 0, x;
    int i;

    for ( i = 0 ; i < aLen || i < bLen ; i++) {

        x = 0;

        if( i < aLen) {

            x+= a[i] - '0';
        }
        if (i < bLen) {

            x+=b[i] - '0';
        }

        x = x + carry;

        carry = x/10;

        x = x%10;

        c[i] = x + '0';
    }

    if(carry != 0) {

        c[i] = carry + '0';
        i++;
    }

    c[i] = '\0';

    c = reverse(c);

    return c;
}

int main () {

    char *a = new char;

    char *b = new char;

    cin>>a>>b;

    char *c = new char;

    c = add(a, b);

    cout<<c<<endl;
}

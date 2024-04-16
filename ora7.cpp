#include <iostream>
#include <vector>

using namespace std;
bool is_palindrome(const string s){
    vector<char> s1 = {};
    for(char c : s) {
        s1.push_back(c);
    }
    vector<char> s2 = {};
    for(int i = s.length()-1; i >= 0; i--) {
        s2.push_back(s[i]);
    }
    if(s1 == s2) {
        return true;
    }
    else{
        return false;
    }

}
void printascii() {
    for(int i = 32; i <= 127; i++) {
        cout << i << ": " << char(i) << endl;
    }
}

void lepes(int m) {
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= m - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << "  ";
         for(int j = 1; j <= i; j++) {
            cout << "#";
        }
        for(int j = 1; j <= m - i; j++) {
            cout << " ";
        }
        cout << endl;

    }
}


void pozitiv(int* tomb, int l) {
    for(int i = 0; i < l; i++) {
        if(tomb[i] < 0) {
            tomb[i] = -tomb[i];
        }
    }

}

int* sekelymasolas(int* t, int l) {
    int* t2 = t;
    return t2;
}

int* melymasolas(int* t, int l) {
    int* t2 = new int[l];

    for(int i = 0; i < l; i++) {
        t2[i] = *(t+i);
    }
    return t2;
}

int main() {
    cout << is_palindrome("abba") << endl;
    //printascii();
    lepes(5);
    int tomb[5] = {1,2,-3,4,-5};
    pozitiv(tomb, 5);
    int* tomb2 = sekelymasolas(tomb,5);
    tomb[0] = 100;
    cout << tomb[0] << " " << *tomb2 << endl;
    int* tomb3 = melymasolas(tomb,5);
    tomb[0] = 1;
    cout << tomb[0] << " " << *tomb3 << endl;

    cout << endl;
    // cout <<
    return 0;
}

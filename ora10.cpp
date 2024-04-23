#include <iostream>
#include <vector>

using namespace std;
//n-nel is működik
int db(int n) {
    int db = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            db++;
        }
    }
    return db;
}

int max_fv(int tomb[10]){
    int max = tomb[0];
    int idx = 0;
    for(int i = 0; i < 10; i++) {
        if(max <= tomb[i]) {
            max = tomb[i];
            idx = i;
        }
    }
    return idx;
}

int gyak(int tomb[10]) {
    int max = 0;
    int num = 0;

    for(int i = 0; i < 10; i++) {
        int db = 0;
        for(int j = 0; j < 10; j++) {
            if(tomb[i] == tomb[j]) {
                db++;
            }
        }
        if(db > max) {
            max = db;
            num = tomb[i];
        }
    }
    return num;
}

int main() {

    cout << db(20) << endl;
    int tomb[10] = {1,1,2,3,3,3,4,5,5,6};
    cout << gyak(tomb) << endl;

    return 0;
}

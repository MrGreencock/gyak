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

int main() {

    cout << db(20) << endl;
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << max_fv(tomb) << endl;
    return 0;
}

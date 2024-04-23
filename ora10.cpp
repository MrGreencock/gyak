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

int main() {

    cout << db(20);
    return 0;
}

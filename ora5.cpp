#include <iostream>
#include <vector> //Kell!!!
#include <algorithm>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

void csere(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void cseremem(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void csereptr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void tombkiir(int tomb[5]){
    for(int i = 0; i < 5; i++) {
        cout << ++tomb[i] << " ";
    }
    cout << endl;
}

int fv(int n) {
    if(n == 1){
        return n;
    }
    else {
        return n * fv(n-1);
    }
}

int fv2(int n) {
    int o = 1;
    for(int i = 2; i <= n; i++) {
        o = o * i;
    }
    return o;
}

int fuggveny(int n) {
    if(n <= 2) {
        return 1;
    }
    else {
        return fuggveny(n-1) + fuggveny(n-2);
    }
}

int main(){
    //Vektorok
    //clear, insert, size, push és pop
    vector<int> v; //integereket tartalmazó vektor
    for(int i = 0; i <= 10; i++) {
        v.push_back(i*10);
        cout << v[i] << " " << v.at(i) << endl;
    }
    //cout << v.at(-2) << endl;

    cout << v.size() << " " << v.capacity() << endl;
    int* pos = v.data();
    cout << pos << endl;
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    v.push_back(23);
    cout << v.size() << " " << v.capacity() << endl;
    pos = v.data();
    cout << pos << endl;


    cout << v.front() << " " << v.back() << endl;
    v.pop_back(); // utolsó elem törlése
    v.clear(); // törli az egészet


    v = {1,4,5,34,2,35,76,36,55,1,23,23,45,89};
    sort(v.begin(), v.end());
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;


    //függvények
    //típus név(ptípus pnév, ... lehet üres is){ return x }
    // eljárás = void név(param) {} return nem kell.
    int a = 3;
    int b = 5;
    cout << sum(a,b) << endl;
    int x = 1;
    int y = 2;
    cseremem(x,y);
    cout << x << " " << y << endl;

    csereptr(&x, &y);
    cout << x << " " << y << endl;

    int tomb[5] = {1,2,3,4,5};
    tombkiir(tomb);
    tombkiir(tomb);
    int szam = fv(5);
    cout << fuggveny(4) << endl;

    return 0;
}

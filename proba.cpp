#include <iostream>

using namespace std;

int main() {
    //std::cout << "Hello" << std::endl;
    // == <= >= != < > !
    // && || !
    cout << (60 > 5) << endl;

    //bitmûveletek
    // & | ^ << >>
    // és, vagz, XOR, balra eltolás
    int a = 60;
    int b = 13;
    cout << (a << 2) << endl;

    //értékadó operátor
    // = += -= *= /= %= <<= >>= &= ^= |=
    a += 10;
    cout << a << endl;

    //tömbök (az kom)
    //tipus név[db] = {}
    int tomb[5] = {1,2,3,4,5};
    char sztring[] = "Hello, world!";
    sztring[0] = 'h';
    string cppstring = "Hello, world!";
    cppstring[0] = 'h';

    cout << cppstring << endl;

    //implicit tipuskonverzio

    int x = 92;
    double dupla;
    dupla = x;

    double double_num = 1.11;
    int int_num;

    int_num = double_num;

    cout << int_num << endl;

    //explicit tipuskonverzio
    int z = 10;
    double zs;
    zs = double(z);

    cout << zs << endl;
    if(z > 10){
        cout << "nagyobb" << endl;
    }
    else if(z == 10) {
        cout << "egyenlõ" << endl;
    }
    else {
        cout << "kisebb" << endl;
    }

    if(10 > 9){
        if(2 < 3) {
            cout << "Hehe" << endl;
        }
    }

    int x1 = 11;
    int y1 = 10;
    string eredmeny;

    eredmeny = x1 == y1 ? "egyenlõ" : x1 < y1 ? "kisebb" : "nagyobb";
    cout << eredmeny << endl;

    int nap = 1;

    switch(nap) {
        case 6:
            cout << "Szombat" << endl;
            break;

        case 7:
            cout << "Vasárnap" << endl;
            break;

        default:
            cout << "Háh, beszoptad!" << endl;
            break;

    }

    //ciklus

    int i = 0;
    // while == elõtesztelõ ciklus!!!! 0 vagy több futás
    while(i < 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    do{ //hátultesztelõ ciklus, 1 vagy több futás
        cout << i << " ";
        i++;
    }while(i < 10);
    cout << endl;
    //meghatározott lépésszámú ciklus
    //for inicializálás; leállítási feltétel; ciklusváltozó értékváltozása

    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}

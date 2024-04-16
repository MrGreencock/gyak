#include <iostream>

using namespace std;

int main() {

    //cout << "Test";
    int szamok[5] = {20,30,40,50,60};
    for(int i = 0; i < 5; i++) {
        cout << szamok[i] << " ";
        //szamok[i] = szamok[i-1]*2;
    }
    // foreach ciklus!!! for(típus név : tömb)
    cout << endl;
    for(int i : szamok) {
        cout << i << " ";
    }
    cout << endl;
    cout << sizeof(szamok) << endl; //int mérete 4 Byte és 5*4 = 20

    for(int i = 0; i < sizeof(szamok)/sizeof(int); i++) {
        cout << szamok[i] << " ";
    }
    cout << endl;
    int i = 0;
    while(i < 10) {
        cout << i << " ";
        i++;

        if(i == 4) {
            break;
        }
    }
    cout << endl;

    i = 0;
    while(i < 10) {
        if(i == 4) {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    }
    cout << endl;

    //kétdimenziós tömb
    char betuk[2][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'}
    }; //2 (sor) X 4(oszlop)-es mátrix

    cout << betuk[0] << " " << betuk[1] << " " << betuk[0][1];

    int szamok2d[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout << endl;
    float avg = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            avg += szamok2d[i][j];
        }
        cout << avg / 4 << endl;
    }
    //REKORDOK
    struct{
            int szulEv;
            string nev;
    } szemely1, szemely2;

    szemely1.szulEv = 2000;
    szemely1.nev = "Kiss János";

    szemely2 = szemely1;

    cout << szemely1.szulEv << " " << szemely1.nev << endl;

    szemely1.szulEv = 2001;
    cout << szemely1.szulEv << " " << szemely2.szulEv << endl;

    struct jarmu {
        string marka;
        string tipus;
        short int evjarat;
    };

    jarmu swift;
    swift.marka = "Suzuki";
    swift.tipus = "Swift";
    swift.evjarat = 2002;

    jarmu corsa;
    corsa.marka = "Opel";
    corsa.tipus = "Corsa";
    corsa.evjarat = 2004;

    if(swift.evjarat > corsa.evjarat) {
        cout << "A " << swift.tipus << " a fiatalabb" << endl;
    }
    else {
        cout << "A " << corsa.tipus << " a fiatalabb" << endl;
    }

    string st = "narancs";
    //tipus& -> referencia
    string& gyumolcs = st;
    // &név -> memóriacím
    cout << st << " " << gyumolcs << endl;
    cout << &st << " " << &gyumolcs << endl;

    gyumolcs = "kiwi";
    cout << st << " " << gyumolcs << endl;

    cout << &corsa << " " << &corsa.marka << " " << &corsa.evjarat << endl;

    int a = 10;
    int* b = &a; //tipus* = memóriacím!!! (pointer)

    cout << a << " " << &a << " " << b << " " << &b << endl;
    //cout << sizeof(b) << endl;

    cout << *b << endl; //dereference

    *b = 15;
    cout << a << endl;

    int* ptr = NULL;

    if(ptr) {
        cout << "Nem null pointer" << endl;
    }
    else {
        cout << "Null pointer" << endl;
    }

    int tomb[5] = {1,2,3,4,5};
    int* tmbptr;
    tmbptr = tomb; // tömb = memóriacím
    cout << tmbptr << " " << &tomb[0] << " " << tmbptr << endl;

    for (int i = 0; i < 5; i++) {
        cout << tmbptr << " " << *tmbptr << endl;
        tmbptr++;
    }

    tmbptr = &tomb[4];
    for(int i = 5; i > 0; i--) {
        cout << tmbptr << " " << *tmbptr << endl;
        tmbptr--;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int tomb[] = {1,2,3,4,5};
    *(tomb+4) = 500;

    for (size_t i = 0; i < 5; i++)
    {
        *(tomb+i) = 1;
    }

    int* ptrtomb[5]; //integer pointereket tartalmazó tömb

    for (size_t i = 0; i < 5; i++)
    {
        ptrtomb[i] = &tomb[i];
        cout << *ptrtomb[i] << endl;
    }


    const char* names[3]= {"Kiss Károly","Nagy Tamás","Kerekes István"};

    for (size_t i = 0; i < 3; i++)
    {
        cout << (names+i) << " " << *(names+i) << endl;
    }


    int z = 10;
    int * zptr = &z;
    int ** zptrptr = &zptr;

    cout << z << " " << *zptr << " " << **zptrptr << endl;

    int tombb[5] = {1,2,3,4,5};
    int temp = *tombb;
    *tombb = *(tombb+4);
    *(tombb+4) = temp;

    for (size_t i = 0; i < 5; i++)
    {
        cout << *(tombb+i) << " ";
    }

    cout << endl;

    int A[5] = {1,2,3,4,5};
    int B[5];
    int * Aptr = A;
    int * Auptr = &A[4];
    int * Bptr = B;

    while (Aptr <= Auptr)
    {
        *Bptr = *Aptr;
        Bptr++;
        Aptr++;
    }

    for (size_t i = 0; i < 5; i++)
    {
        cout << A[i] << " " << B[i] << endl;
    }


    int a;
    int b[10];

    // c++ new és delete
    //pointer változó = new adattípus

    int* p = new int;
    int * tp = new int[10];

    int* p2 = new(nothrow) int;
    if(!p2)
    {
        cout << "Nem sikerült az allokáció" << endl;
    }else
    {
        *p2 = 29;
        cout << "A p2 értéke: "<< *p2 << endl;
    }


    float * r = new float(72.24);

    cout << r << " " << *r << " " << &r << endl;

    int n2 = 5;
    int* q = new int[2];

    for (size_t i = 0; i < 2; i++)
    {
        q[i] = i+1;
        cout << q[i] << endl;
    }


    delete p2;
    delete r;

    delete q;
    delete[] q;




    cout << endl;




    return 0;
}

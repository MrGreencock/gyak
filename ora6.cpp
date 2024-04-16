#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test() {return 0;}
int test(int a) {return 0;}
float test(double a) {return 0;}
int test(int a, double d) {return 0;}
/*Ilyet ne csin�lj! -> int test(int b){return 0;},
ha van m�r*/
// Ilyet se -> double test(int b){return 0;}

//t�lterhel�s f�ggv�ny azonos n�v, de elt�r� param�terez�ssel (tipus vagy sz�moss�g)

double absolute(double var) {
    if(var < 0.0) {
        var = -var;
    }
    return var;
}

int absolute(int a) {
    if(a < 0) {
        a = -a;
    }
    return a;
}
void kiir(int var) {
    cout << "Integer: " << var << endl;
}

void kiir(double var) {
    cout << "Double: " << var << endl;
}

void kiir(int var, double var2) {
    cout << "Integer: " << var << endl;
    cout << "Double: " << var2 << endl;

}

void operator<<(vector<double>& vd, double d) {
    vd.push_back(d);
}

vector<int> operator+(vector<int> v1,  vector<int> v2) {
    vector<int> o;
    for(int i : v1) {
        o.push_back(i);
    }
    for(int i : v2) {
        o.push_back(i);
    }
    return o;
}

vector <int>& operator<<(vector<int>& vd, int i) {
    vd.push_back(i);
    return vd;
}

vector <int> operator++(vector<int> vd) {
    for(int i : vd) {
        cout << i << " ";
    }
    cout << endl;
}

vector<int>& operator--(vector<int>& v) {
    for(int& i : v) {
        cout << --i << " ";
    }
    cout << endl;
    return v;
}

struct szemely{
    string nev;
    int kor;

    void operator()(string n, int a) {
        nev = n;
        kor = a;
    }
};

ostream& operator<<(ostream& os, const szemely& sz) {
    os << sz.nev;
    os << sz.kor;
    return os;
}

int main() {
    test(); //6.sor
    test(1);
    test(2.2);
    test(1,2.2);
    //cout << absolute(-4.3f) << endl;
    //cout << absolute(-4) << endl;
    kiir(absolute(-1), 5.5);

    //oper�tor t�lterhel�s
    //ford�t�s idej� polimorfizmus -> nem musz�j
    //az eredeti oper�torok m�k�d�se nem v�ltozik
    // elt�r� param�terez�ssel �j funkci� adhat� az oper�tornak


    vector<double> dv = {0, 1, 2.2};
    dv.push_back(3.3);
    dv << 4.4;
    for(double d: dv) {
        cout << d << " ";
    }
    cout << endl;
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {5,6,7,8};
    vector<int> o = v1 + v2;

    for(int i : o) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v = {1,2,3};
    v << 4 << 5 << 6;
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    ++v; //kiirat�s
    ------v;

    szemely sz1;
    sz1.nev = "Toth Kristof";
    sz1.kor = 32;

    szemely sz2;
    sz2.nev = "Kiss Aladar";
    sz2.kor = 17;

    cout << sz1 << " " << sz2 << endl;
    szemely sz3;
    sz3("Kiss Anna", 34);
    cout << sz3.nev << " " << sz3.kor << endl;
    return 0;
}

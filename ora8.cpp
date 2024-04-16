#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

struct Allat {
    string nev;
    int kor;
};
void operator >>(istream& i, Allat& a) {
    i >> a.nev >> a.kor;
}
void operator <<(ostream& i, Allat& a) {
    cout << a.nev << " " <<  a.kor << endl;
}
void operator <<(ofstream& o, Allat& a) {
    o << a.nev << " " << a.kor << endl;
}
istream& operator >>(istream& i, Allat& a) {
    i >> a.nev >> a.kor;
    return i;
}
int main() {

    /*int x,y;
    int sum;
    cout << "Adj meg egy eg�sz sz�mot" << endl;
    cin >> x;
    cout << "Adj meg egy m�sik eg�sz sz�mot" << endl;
    cin >> y;

    sum = x + y;
    cout << "Sum: " << sum;
    */

    //Allat a;
    //cin >> a;
    //cin >> a.nev >> a.kor;
    //cout << a.nev << " "  << a.kor << endl;

    //1 k�rj�nk be egy sz�mot (n)
    // Hozzunk l�tre egy �llatokat tartalmaz� rekordot
    // olvas be n db �llatot a vectorba

    int n;
    cout << "Hany allatot szeretnel" << endl;
    cin >> n;
    vector <Allat> allatok = {};
    Allat al;
    for(int i = 0; i < n; i++) {
        cin >> al;
        allatok.push_back(al);
    }
    for(Allat a : allatok) {
        cout << a;
    }

    //f�jlkezeles
    //1. ofstream - l�trehoz �s �r
    //2. ifstream - olvas
    //3. fstream - l�trehoz, �r, olvas
    ofstream myFile("file1.txt"); //logikai �llom�ny l�trehoz�sa, �sszerendel�s (logikai �s fizikai), megnyit�sa
    myFile << "A f�jl megnyitottam �r�sra" << endl;  //feldolgoz�s
    myFile << "Bar�" << endl;
    myFile.close(); //lez�r�s


    string text;
    ifstream readfile("file1.txt");
    while(getline(readfile, text)) {
        cout << text << endl;
    }
    readfile.close();

    //k�rj�k be a felhaszn�l� nev�t
    // �rjuk ki egy f�jlba a nev�t
    // olvassuk ki
    //kiolvasott �rt�ket �rjuk ki a k�perny�re

    string nev;
    cout << "Mi a neved: " << endl;
    cin >> nev;

    ofstream ofile("nev.txt");
    ofile << nev;
    ofile.close();
    ifstream rfile("nev.txt");
    string s;
    rfile >> s;
    cout << s << endl;
    rfile.close();


    /* �llom�ny megnyit�si m�dja
        ios::app Append - hozz�f�z�s, minden output a f�jl v�g�re ker�l
        ios::ate kimenetre nyitjuk az allom�nyt, a read/write vezerles a fajl vegere kerul

        ios::in megnyitas olvasasra
        ios::out -||- �r�sra
        ios:trunch ha a fajl letezik, a tartalmat kitorli megnyitas elott.
    */
    //ofile.open("nev.txt", ios::out | ios::trunch);
    //ofile.close();

    //fstream f;
    //f.open("nev.txt", ios::out | ios::in);
    //f.close();


    ofstream allatfile("allatok.txt");
    for(int i = 0; i < allatok.size(); i++) {
        allatfile << allatok;
    }
    allatfile.close();

    /*Olvasd be az allatok.txt adatait tetsz�leges sorrendbe, �rd ki a legid�sebb �llatok
    ZH-ban lehet ilyen (pr�ma)
     */
    vector <Allat> allatv;
    ifstream inallat("allatok.txt");

    Allat allatolvas;
    //while(inallat >> allatolvas.nev >> allatolvas.kor) {
    while(inallat >> allatolvas) {}
        allatv.push_back(allatolvas);
    }
    int max = 0;
    int maxindex = 0;
    for(int i = 0; i < allatv.size(); i++) {
        if(max < allatv[i].kor) {
            max = allatv[i].kor;
            maxindex = i;
        }
    }
    cout << "Legid�sebb �llat: " << allatv[maxindex].nev << " " << max << endl;

    return 0;
}

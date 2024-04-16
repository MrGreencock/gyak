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
    cout << "Adj meg egy egész számot" << endl;
    cin >> x;
    cout << "Adj meg egy másik egész számot" << endl;
    cin >> y;

    sum = x + y;
    cout << "Sum: " << sum;
    */

    //Allat a;
    //cin >> a;
    //cin >> a.nev >> a.kor;
    //cout << a.nev << " "  << a.kor << endl;

    //1 kérjünk be egy számot (n)
    // Hozzunk létre egy állatokat tartalmazó rekordot
    // olvas be n db állatot a vectorba

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

    //fájlkezeles
    //1. ofstream - létrehoz és ír
    //2. ifstream - olvas
    //3. fstream - létrehoz, ír, olvas
    ofstream myFile("file1.txt"); //logikai állomány létrehozása, összerendelés (logikai és fizikai), megnyitása
    myFile << "A fájl megnyitottam írásra" << endl;  //feldolgozás
    myFile << "Baró" << endl;
    myFile.close(); //lezárás


    string text;
    ifstream readfile("file1.txt");
    while(getline(readfile, text)) {
        cout << text << endl;
    }
    readfile.close();

    //kérjük be a felhasználó nevét
    // Írjuk ki egy fájlba a nevét
    // olvassuk ki
    //kiolvasott értéket írjuk ki a képernyõre

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


    /* állomány megnyitási módja
        ios::app Append - hozzáfûzés, minden output a fájl végére kerül
        ios::ate kimenetre nyitjuk az allományt, a read/write vezerles a fajl vegere kerul

        ios::in megnyitas olvasasra
        ios::out -||- írásra
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

    /*Olvasd be az allatok.txt adatait tetszõleges sorrendbe, írd ki a legidõsebb állatok
    ZH-ban lehet ilyen (príma)
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
    cout << "Legidõsebb állat: " << allatv[maxindex].nev << " " << max << endl;

    return 0;
}

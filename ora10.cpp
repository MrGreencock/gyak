#include <iostream>
#include <vector>
#include <fstream>
#include <map>
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



//f(a(változik),b (nem változik),c(változik))
// a -> c
// b -> a
// a++
// c--
//Mindegy, de a b az állandó



int main() {

    cout << db(20) << endl;
    int tomb[10] = {1,1,2,3,3,3,4,5,5,6};
    cout << gyak(tomb) << endl;


    //Olvassuk be a lotto.txt-t egy tetszőleges adatszerkezetbe (1 pont)
    //Számoljuk a gyakoriságot
    //eredményt pedig írja bele a gyakorisag.txt-be

    ifstream infile("lotto.txt");
    vector<int> szamok;
    int temp;
    while(infile >> temp) {
        szamok.push_back(temp);
    }
    /*for(int i : szamok) {
        cout << i << " ";
    }*/
    //1 pont, oszt chill
    //map
    map<int, int> elofordulasok;

    for(int i : szamok) {
        elofordulasok[i] = 0;
    }
    for(int i : szamok) {
        elofordulasok[i]++;
    }
    ofstream outfile("gyakorisag.txt");
    for(pair<int, int> p : elofordulasok) {
        outfile << p.first << " " << p.second << endl;
    }

    infile.close();
    outfile.close();


    //Adott a lottószámokat tartalmazó doksi
    ifstream in("lotto.txt");
    int lotto[4][5];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            in >> lotto[i][j];
        }
    }
    int maximum[5] = {lotto[0][0], lotto[1][0], lotto[2][0], lotto[3][0], lotto[4][0]};
    ofstream out("maximux.txt");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if(maximum[i] < tomb[j][i]) {
                maximum[i] = tomb[j][i];
            }
        }

    }
    out << maximum;

    vector<labda> labdak;
    labda ltemp;
    for(int i = 0; i < 5; i++) {
        cout << "Adja meg a szinet es meretet a labdanak" << endl;
        cin >> labdak.szin >> labdak.meret;
        labdak.push_back(ltmemp);

    }
    vector<labda> piros;
    vector<labda>nempiros;
    for(labda l : labdak) {
        if(l.szin == "piros") {
            piros.push_back(l);
        }
        else {
            nempiros.push_back(l);
        }
    }
    cout << "Piros labdak: ";
    for(labda l: prios) {
        cout << l.szin << " " << l.meret << endl;
    }
    in.close();
    out.close();


    return 0;
}

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

    return 0;
}

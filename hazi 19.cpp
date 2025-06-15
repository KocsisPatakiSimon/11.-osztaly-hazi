#include <iostream>
#include <string>

using namespace std;

struct ListaElem {
    int szam;
    string szoveg;
    ListaElem* kov;
};

int main() {
    int n;
    cin >> n;

    ListaElem* fej = nullptr;
    ListaElem* utolso = nullptr;

    // Lista építése
    for (int i = 0; i < n; ++i) {
        ListaElem* uj = new ListaElem;
        cin >> uj->szam >> uj->szoveg;
        uj->kov = nullptr;

        if (fej == nullptr) {
            fej = uj;
        } else {
            utolso->kov = uj;
        }
        utolso = uj;
    }

    // Maximum keresése
    ListaElem* maxElem = fej;
    for (ListaElem* ptr = fej->kov; ptr != nullptr; ptr = ptr->kov) {
        if (ptr->szam > maxElem->szam) {
            maxElem = ptr;
        }
    }

    // Eredmény kiírása
    cout << maxElem->szoveg << endl;

    // Memória felszabadítása
    while (fej != nullptr) {
        ListaElem* temp = fej;
        fej = fej->kov;
        delete temp;
    }

    return 0;
}

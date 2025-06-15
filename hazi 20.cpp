#include <iostream>
#include <string>

struct ListaElem {
    int szam;
    std::string szoveg;
    ListaElem* kov;
};

int main() {
    int n;
    std::cin >> n;

    ListaElem* fej = nullptr;
    ListaElem* utolso = nullptr;

    for (int i = 0; i < n; ++i) {
        ListaElem* uj = new ListaElem;
        std::cin >> uj->szam >> uj->szoveg;
        uj->kov = nullptr;

        if (fej == nullptr) {
            fej = uj;
        } else {
            utolso->kov = uj;
        }
        utolso = uj;
    }

    ListaElem* maxElem = fej;
    for (ListaElem* ptr = fej->kov; ptr != nullptr; ptr = ptr->kov) {
        if (ptr->szam > maxElem->szam) {
            maxElem = ptr;
        }
    }

    std::cout << maxElem->szoveg << "\n";

    // mem�ria felszabad�t�sa
    while (fej != nullptr) {
        ListaElem* temp = fej;
        fej = fej->kov;
        delete temp;
    }

    return 0;
}

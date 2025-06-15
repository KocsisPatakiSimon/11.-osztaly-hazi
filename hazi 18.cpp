#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool egyformaSzamjegyek(int szam) {
    int utolso = szam % 10;
    szam /= 10;
    while (szam > 0) {
        if (szam % 10 != utolso)
            return false;
        szam /= 10;
    }
    return true;
}

void buborekosRendezes(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    ifstream f("table.txt");
    vector<int> eredmenyek;
    int szam;
    while (f >> szam) {
        if (egyformaSzamjegyek(szam)) {
            eredmenyek.push_back(szam);
        }
    }
    f.close();

    if (eredmenyek.empty()) {
        cout << "DOES NOT EXIST" << endl;
    } else {
        buborekosRendezes(eredmenyek);
        for (int x : eredmenyek) {
            cout << x << endl;
        }
    }

    return 0;
}

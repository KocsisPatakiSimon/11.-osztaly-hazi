#include <iostream>
using namespace std;

int hatvany(int n) {
    int oszto = 2, minHatvany = 99, minOszto = 99;

    while (n > 1) {
        int hatvany = 0;
        while (n % oszto == 0) {
            n /= oszto;
            hatvany++;
        }

        if (hatvany > 0) {
            if (hatvany < minHatvany || (hatvany == minHatvany && oszto < minOszto)) {
                minHatvany = hatvany;
                minOszto = oszto;
            }
        }

        oszto++;
    }
    return minOszto;
}

int main() {
    int n;
    cin >> n;
    cout << hatvany(n);
    return 0;
}

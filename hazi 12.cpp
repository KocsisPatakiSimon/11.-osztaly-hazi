#include <iostream>
using namespace std;

void hanoi(int n, char A, char C, char B ) {
    if (n == 1) {
        cout << "1." << A << " -> " << C << endl;
        return;
    }
    hanoi(n - 1, A, B, C);
    cout << n << "." << A << " -> " << C << endl;
    hanoi(n - 1, B, C, A);
}

int main() {
    int k;
    cin >> k;
    hanoi(k, 'A', 'C', 'B');
    return 0;
}
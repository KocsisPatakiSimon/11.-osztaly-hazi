#include <iostream>
using namespace std;


void kob(int n) {
    if (n == 0) {
        return;
    }

    int cube = n * n * n;

    cout << cube;

    if (n >= 1) {
        cout << " ";
    }

    kob(n - 1);
}


int main() {
    int n;
    cin >> n;
    kob(n);
    cout << endl;

    return 0;
}

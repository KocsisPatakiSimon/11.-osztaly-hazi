#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int pos, hossz;
    cin >> pos;
    cin >> hossz;

    if (pos >= 0 && pos < v.size()) {
        int torlesHatar = min(pos + hossz, (int)v.size());
        v.erase(v.begin() + pos, v.begin() + torlesHatar);
    }

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}

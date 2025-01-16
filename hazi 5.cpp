#include <iostream>
#include <string>
using namespace std;

int main() {
    string szo, result;
    cin >> szo;

    for (char c : szo) {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            result += "mpm";
        } else {
            result += c;
        }
    }
    
    string final_result;
    for (char c : result) {
        final_result += c;
        if (c == 'p') {
            final_result += 'Z';
        }
    }

    cout << final_result << endl;
    return 0;
}

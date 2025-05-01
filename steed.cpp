#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int capital = 0, small = 0;

    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            capital++;
        else if (c >= 'a' && c <= 'z')
            small++;
    }

    cout << capital << " " << small << endl;
    return 0;
}

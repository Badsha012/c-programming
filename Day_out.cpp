#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Try all 3 combinations, if any two sum >= third, it's Yes
        bool canSee = false;
        if (a + b >= c) canSee = true;
        if (b + c >= a) canSee = true;
        if (c + a >= b) canSee = true;

        cout << (canSee ? "Yes" : "No") << '\n';
    }

    return 0;
}

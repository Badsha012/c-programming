#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    int freq[10] = {0};

    // Count frequency of each digit
    for (char c : num) {
        freq[c - '0']++;
    }

    // Find the digit with max frequency
    int maxFreq = 0, digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            digit = i;
        }
    }

    cout << digit << endl;
    return 0;
}

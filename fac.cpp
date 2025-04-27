#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N; // Read the input value for N

    // Initialize the factorial result
    long long factorial = 1;

    // Calculate N! % 10000
    for (int i = 1; i <= N; i++) {
        factorial = (factorial * i) % 10000;
    }

 
    cout << factorial << endl;

    return 0;
}
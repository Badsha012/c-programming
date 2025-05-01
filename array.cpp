#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];  // max N is less than 100

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    bool isAscending = true;
    for (int i = 1; i < N; ++i) {
        if (arr[i] < arr[i - 1]) {
            isAscending = false;
            break;
        }
    }

    if (isAscending) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

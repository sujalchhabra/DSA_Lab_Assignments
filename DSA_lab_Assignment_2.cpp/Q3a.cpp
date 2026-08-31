#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;   // Numbers should be from 1 to 6

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] != i + 1) {
            cout << "Missing number is: " << i + 1;
            return 0;
        }
    }

    cout << "Missing number is: " << n;

    return 0;
}
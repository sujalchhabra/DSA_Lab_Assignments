#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5];

    cout << "Enter 5 strings:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {

        for (int j = 0; j < 4 - i; j++) {

            if (arr[j] > arr[j + 1]) {

                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Alphabetical Order:\n";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
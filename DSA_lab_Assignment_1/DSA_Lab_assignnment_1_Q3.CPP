#include <iostream>
using namespace std;

int main()
{
    int arr[100], temp[100];
    int n, k, choice;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input number of rotations
    cout << "Enter K (number of positions to rotate): ";
    cin >> k;

    // If K is greater than array size
    k = k % n;

    cout << "\n1. Left Rotation";
    cout << "\n2. Right Rotation";
    cout << "\nEnter your choice: ";
    cin >> choice;

    // LEFT ROTATION
    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }

        cout << "Array after left rotation: ";
    }

    // RIGHT ROTATION
    else if (choice == 2)
    {
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = arr[i];
        }

        cout << "Array after right rotation: ";
    }

    else
    {
        cout << "Invalid choice!";
        return 0;
    }

    // Display rotated array
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}
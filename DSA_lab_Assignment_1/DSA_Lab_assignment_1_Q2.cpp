#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Removing duplicate elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Check if duplicate is found
            if (arr[i] == arr[j])
            {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;

                // Check the same position again
                j--;
            }
        }
    }

    cout << "\nArray after removing duplicates: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
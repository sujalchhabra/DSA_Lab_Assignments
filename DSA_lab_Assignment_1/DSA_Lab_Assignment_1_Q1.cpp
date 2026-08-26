#include <iostream>
using namespace std;

#define MAX 100

int main()
{
    int arr[MAX];
    int n = 0;
    int choice;

    do
    {
        cout << "\n------ MENU ------";
        cout << "\n1. CREATE";
        cout << "\n2. DISPLAY";
        cout << "\n3. INSERT";
        cout << "\n4. DELETE";
        cout << "\n5. LINEAR SEARCH";
        cout << "\n6. EXIT";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            // 1. CREATE
            case 1:
            {
                cout << "Enter number of elements: ";
                cin >> n;

                if (n > MAX)
                {
                    cout << "Array size cannot be greater than " << MAX;
                    n = 0;
                    break;
                }

                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                cout << "Array created successfully!";
                break;
            }

            // 2. DISPLAY
            case 2:
            {
                if (n == 0)
                {
                    cout << "Array is empty. Please create the array first.";
                }
                else
                {
                    cout << "Array elements are: ";
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                }
                break;
            }

            // 3. INSERT
            case 3:
            {
                int element, position;

                if (n == MAX)
                {
                    cout << "Array is full!";
                    break;
                }

                cout << "Enter element to insert: ";
                cin >> element;

                cout << "Enter position (0 to " << n << "): ";
                cin >> position;

                if (position < 0 || position > n)
                {
                    cout << "Invalid position!";
                }
                else
                {
                    // Shift elements to the right
                    for (int i = n; i > position; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[position] = element;
                    n++;

                    cout << "Element inserted successfully!";
                }
                break;
            }

            // 4. DELETE
            case 4:
            {
                int position;

                if (n == 0)
                {
                    cout << "Array is empty!";
                    break;
                }

                cout << "Enter position to delete (0 to " << n - 1 << "): ";
                cin >> position;

                if (position < 0 || position >= n)
                {
                    cout << "Invalid position!";
                }
                else
                {
                    // Shift elements to the left
                    for (int i = position; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    cout << "Element deleted successfully!";
                }
                break;
            }

            // 5. LINEAR SEARCH
            case 5:
            {
                int key;
                bool found = false;

                cout << "Enter element to search: ";
                cin >> key;

                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        cout << "Element found at position: " << i;
                        found = true;
                        break;
                    }
                }

                if (found == false)
                {
                    cout << "Element not found!";
                }
                break;
            }

            // 6. EXIT
            case 6:
            {
                cout << "Exiting program... Thank you!";
                break;
            }

            default:
                cout << "Invalid choice! Please try again.";
        }

    } while (choice != 6);

    return 0;
}
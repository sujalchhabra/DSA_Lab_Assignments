#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int rows, columns;

    // Enter matrix size
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    // Enter matrix elements
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Find sum of every row
    cout << "\nSum of each row:\n";

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < columns; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }

    // Find sum of every column
    cout << "\nSum of each column:\n";

    for (int j = 0; j < columns; j++)
    {
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
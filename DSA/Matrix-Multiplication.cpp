#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2, mat1[10][10], mat2[10][10];

    cout << "Enter Row and Column for matrix 1:\n";
    cin >> row1 >> col1;

    cout << "Enter values of matrix 1:\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter Row and Column for matrix 2:\n";
    cin >> row2 >> col2;

    cout << "Enter values of matrix 2:\n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    if (col1 != row2)
    {
        cout << "Multipliction is not possible\n";
        return 0;
    }

    // Calculation Process...
    int result[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Result of multiplication is:\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
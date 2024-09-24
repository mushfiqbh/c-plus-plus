#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void input_array(int (*arr)[3], int row);
void print_array(int (*arr)[3], int row);

void row_sum(int (*arr)[3], int row)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void col_sum(int (*arr)[3], int row)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

bool isIdentity(int (*arr)[3], int row)
{
    if (row != 3)
    {
        return false;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void transposer(int arr[][3], int row)
{
    int tArr[3][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tArr[i][j] = arr[j][i];
        }
    }
    print_array(tArr, row);
}

int main()
{
    int row = 4;
    int arr[row][3];
    input_array(arr, row);
    // print_array(arr, row);
    // cout << isIdentity(arr, row);
    // col_sum(arr, row);
    transposer(arr, row);

    return 0;
}

void input_array(int (*arr)[3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print_array(int (*arr)[3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

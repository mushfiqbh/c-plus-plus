#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number of rows
    for (int i = 1; i <= n; i++) { // loop from 1 to n
        string sp(2*(n-i), ' ');
        cout << sp;
        
        for (int k = 1; k < i; k++) { // loop to print stars
            cout << "* "; // print a star and a space
        }
        cout << "*" << endl; // print a new line
    }
    return 0;
}

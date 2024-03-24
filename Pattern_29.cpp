#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string sp(n-1, ' ');
    for(int i=0; i<n; i++){
        string star(2*i+1, '*');
        cout << sp << star << endl;
        sp.pop_back();
    }
    return 0;
}
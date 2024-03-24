#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int total = 4*x+y;
        cout << total << endl;
    }
    return 0;
}
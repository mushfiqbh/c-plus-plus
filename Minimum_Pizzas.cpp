#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int pizza = ceil(float(x*y)/4);
        cout << pizza << endl;
    }
    return 0;
}
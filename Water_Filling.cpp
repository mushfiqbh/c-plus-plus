#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if((x+y+z) <= 1){
            cout << "Water filling time" << endl;
        }else{
            cout << "Not now" << endl;
        }
    }
    return 0;
}
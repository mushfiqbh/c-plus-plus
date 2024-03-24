#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int children, candy;
        cin >> children >> candy;
        if(candy<children){
            int extra = ceil(float(children-candy) / 4);
            cout << extra << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}
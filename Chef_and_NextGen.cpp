#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        if(X*Y >= A*B){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
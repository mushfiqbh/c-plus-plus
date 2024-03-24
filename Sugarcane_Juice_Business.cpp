#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int profit = n*50*0.3;
        cout << fixed << setprecision(0) << profit << endl;
    }
    return 0;
}
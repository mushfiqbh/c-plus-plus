#include <iostream>
using namespace std;

int main(){
    int t, n=0;
    cin >> t;
    while(t--){
        string scan;
        cin >> scan;
        if(scan == "X++" || scan == "++X"){
            n++;
        }else{
            n--;
        }
    }
    cout << n;
}
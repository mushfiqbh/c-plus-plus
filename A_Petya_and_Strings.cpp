#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int flag = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i]<=90){
            a[i] += 32;
        }
        if(b[i]<=90){
            b[i] += 32;
        }

        if(a[i] > b[i]){
            flag = 1;
            break;
        }
        else if(a[i] < b[i]){
            flag = -1;
            break;
        }else{}
    }
    cout << flag;
    return 0;
}
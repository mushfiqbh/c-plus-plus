#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string sp(n-1, ' ');
    for(int i=0; i<5; i++){
        cout << sp;
        char c = 'A';
        for(int j=0; j<(2*i+1); j++){
            char ch = c + j;
            if(j==2*i){
                cout << ch;
                continue;
            }
            cout << ch << ' ';
        }
        cout << endl;
        sp.pop_back();
    }
}
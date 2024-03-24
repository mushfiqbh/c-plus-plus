#include <iostream>
using namespace std;
typedef long long ll;

bool beautyear(int year){
    int a = year % 10;
    int b = (year / 10) % 10;
    int c = (year / 100) % 10;
    int d = (year / 1000) % 10;
    if(a!=b && a!=c && a!=d && b!=c && b!= d && c!= d){
        return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int year;
    cin >> year;
    for(int i=year+1; i<=9012; i++){
        if(beautyear(i) == true){
            cout << i;
            i = 9013;
        }
    }

    return 0;
}
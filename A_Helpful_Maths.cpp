#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s, n;
    vector<int> v;

    cin >> s;
    for(char digit : s){
        if(isdigit(digit)){
            n += digit;
        }else{
            v.push_back(stoi(n));
            n = "";
        }
    }
    v.push_back(stoi(n));
    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << '+';
    }
    cout << v.back();

	return 0;
}
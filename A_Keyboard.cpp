// Problem Solver: Mushfiq R.
#include <iostream>
#include <string>
using namespace std;

int findIndex(char c, string s){
    for(int i=0; i<s.length(); i++){
        if(c == s[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c;
    string s, kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> c;
    cin >> s;

    for (int i=0; i<s.length(); i++){
        if(c == 'R'){
            if(s[i] != 'q' && s[i] != 'a' && s[i] != 'z'){
                s[i] = kb[findIndex(s[i], kb) - 1];
            }
        }else{
            if(s[i] != 'p' && s[i] != ';' && s[i] != '/'){
                s[i] = kb[findIndex(s[i], kb) + 1];
            }
        }
    }
    cout << s;

    return 0;
}

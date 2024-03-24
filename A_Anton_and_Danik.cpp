#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, anton=0, danik=0;
    string scan;
    cin >> n; 
    cin >> scan;

    for(int i=0; i<n; i++){
        if(scan[i] == 'A'){
            anton++;
        }
        else if(scan[i] == 'D'){
            danik++;
        }
    }

    if(anton > danik){
        cout << "Anton";
    }else if(danik > anton){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }

	return 0;
}
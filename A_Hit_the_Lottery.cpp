#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n, count=0;
    cin >> n; 
    int note;
    int dv[5] = {100, 20, 10, 5, 1};
    for(int i=0; i<5;){
        note = dv[i];
        if(n >= note){
            count++;
            n = n - note;
        }else{
            i++;
        }
    }
	cout << count;

	return 0;
}
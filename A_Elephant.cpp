#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int x;
	cin >> x;
	int count = 0;
	
    count = x/5;
    if(x%5!=0){
        count++;
    }
	cout << count;

	return 0;
}
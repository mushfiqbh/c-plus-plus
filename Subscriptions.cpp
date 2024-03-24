#include <iostream>
#include <cmath>

int main(){
	int t;
	std::cin >> t;
	for(int i = 0; i < t; i++){
		int n, x, group;
		std::cin >> n >> x;
		group = ceil(float(n)/6);
		std::cout << group*x << std::endl;
	}
	return 0;
}

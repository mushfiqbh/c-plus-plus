#include <iostream>

int main(){
	int t;
	std::cin >> t;
	for(int i = 0; i < t; i++){
		int n;
        std::cin >> n;
        if((10-n) >= 3){
            std::cout << "Yes" << std::endl;
        }else{
            std::cout << "No" << std::endl;
        }
	}
	return 0;
}

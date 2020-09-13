
#include <iostream>

int main() {
	std::cout << "Writing 1 - 100 using while-loop\n";
	int i = 1;
	while (i <= 100) {
		std::cout << "["<< i << "]";

		if (i % 10 == 0) {
			std::endl(std::cout);
		}
		i++;
	}
	std::endl(std::cout);
	system("pause");
	
	std::cout << "Writing 1 - 100 using for-loop\n";
	for (int u = 1;u <= 100;u++) {
		std::cout << "[" << u << "]";
		if (u % 10 == 0) {
			std::endl(std::cout);
		}
	}


}


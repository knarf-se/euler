#include <iostream>
#define LIMIT 1000
#define A(y) ((int)(LIMIT-1)/y)
#define B(y) (y*A(y)*(A(y)+1)/2)
int main(){ //	Cooler soloution
	std::cout << B(3)+B(5)-B(15) << std::endl;
	return 0;
}

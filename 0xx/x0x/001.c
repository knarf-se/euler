#include <stdio.h>
int main() {
	int s = 0, i = 1000;
	while(i--)
		if(!(i%3)|!(i%5))
			s += i;
	return 0>printf("Answer is: %d\n", s);
}

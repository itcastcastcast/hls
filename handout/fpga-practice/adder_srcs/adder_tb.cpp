#include "adder.h"

int main() {
	int a=10, b=20, c=-1;
	add(a, b, c);
	if (c != a + b)
		return 1;
	else
		return 0;
}

#include <stdio.h>

int main(void)
{
	float a,b;

	b = 2.0e20 + 1; // trying to change the 21st digit
	a = b - 20.e20;
	printf("%f\n", a);

	return 0;
}
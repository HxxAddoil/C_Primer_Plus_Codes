#include <stdio.h>

int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	// %e connot convert a integer to a floatingpoint number
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);

	// n1:8bytes n2:8bytes n3:4bytes n4:4bytes while %ld convert 4 bytes
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

	return 0;
}
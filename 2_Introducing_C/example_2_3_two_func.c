#include <stdio.h>

void butler(void); /* prototype*/

int main(void)
{
	printf("I will suumon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
}

void butler(void)
{
	printf("You rang, sir?\n");
}
#include <stdio.h>

#define PRAISE "Yuo are an extrodinary being."

int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}
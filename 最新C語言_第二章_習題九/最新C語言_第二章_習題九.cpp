#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int temp;

	printf("交換前的a b c: %d %d %d\n", a, b, c);

	temp = a;
	a = b;
	b = temp;

	temp = a;
	a = c;
	c = temp;

	printf("交換後的a b c: %d %d %d\n", a, b, c);

	system("PAUSE");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int temp;

	printf("�洫�e��a b c: %d %d %d\n", a, b, c);

	temp = a;
	a = b;
	b = temp;

	temp = a;
	a = c;
	c = temp;

	printf("�洫�᪺a b c: %d %d %d\n", a, b, c);

	system("PAUSE");
	return 0;
}
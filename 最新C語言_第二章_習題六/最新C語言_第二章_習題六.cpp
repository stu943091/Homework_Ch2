#include <stdio.h>
#include <stdlib.h>

int myfun(int a)
{
	int total = 1;
	int i;
	for (i = 1; i <= a; i++)
	{
		total = total * i;
	}
	return total;
}

int main(int argc, char *argv[])
{
	int a;
	printf("�п�J�@�Ӽ�?(���D�u���w5)");
	scanf("%d", &a);
	printf("%d", myfun(a));

	system("PAUSE");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int intnum1 = 3, intnum2 = 2;
	float answer;

	answer = intnum1 / intnum2;
	printf("3的整數除以2的整數所得到的商也是整數:%.0f\n", answer);

	answer = (float)intnum1 / intnum2;
	printf("3的浮點數除以2的整數所得到的商卻是浮點數:%.1f\n", answer);

	system("PAUSE");
	return 0;
}
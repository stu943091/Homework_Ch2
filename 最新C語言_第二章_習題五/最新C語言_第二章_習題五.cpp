#include <stdio.h>
#include <stdlib.h>

int main()
{
	int intnum1 = 3, intnum2 = 2;
	float answer;

	answer = intnum1 / intnum2;
	printf("3����ư��H2����Ʃұo�쪺�Ӥ]�O���:%.0f\n", answer);

	answer = (float)intnum1 / intnum2;
	printf("3���B�I�ư��H2����Ʃұo�쪺�ӫo�O�B�I��:%.1f\n", answer);

	system("PAUSE");
	return 0;
}
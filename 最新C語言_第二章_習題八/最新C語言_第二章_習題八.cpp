#include <stdio.h>
#include <stdlib.h>
#define mini 74
#define mid 81
#define big 94

int main()
{
	float average;

	average = (mini + mid + big) / 3.0; //為了保留小數點所以要除以3.0
	printf("74_81_94的平均數為%.1f\n", average);

	system("PAUSE");
	return 0;
}
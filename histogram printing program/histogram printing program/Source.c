#include <stdio.h>
#define SIZE 10
int main()
{
	int n[SIZE] = { 19, 3, 5, 7, 11, 8, 8, 23, 2, 10 };
	int i, j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (i = 0; i <= SIZE - 1; i++)
	{
		printf("%7d%13d         ", i, n[i]);
		for (j = 1; j <= n[i]; j++) /* print one bar */
			printf("%c", '*');
		printf("\n");


	}
	return 0;


}
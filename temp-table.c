#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
int main()
{
	float fahr, celsius;
	fahr = LOWER;

	while(fahr <= UPPER)
	{
		celsius = 5 * (fahr -32 / 9);
		printf("%3.1f \t %6.1f\n",fahr, celsius);

		fahr = fahr + STEP;
	}


}

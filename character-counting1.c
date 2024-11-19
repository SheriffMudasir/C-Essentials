#include <stdio.h>
/* Read character increment using for loop */
int main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
	return 0;
}

#include <stdio.h>
/* count newlines, tabs and backspace */
int main()
{
	int count;
	int c;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == '\b')
		{
			count++;
			printf("%d\n", count);

		}
	return 0;
}

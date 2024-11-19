#include <stdio.h>
/* count character in input stream */
int main()
{
	long nc;
	

	nc = 0;
	while ( getchar() != EOF)
	{
		++nc;
		printf("%ld", nc);
	}
	return 0;
}


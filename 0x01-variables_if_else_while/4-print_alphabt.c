#include <stdio.h>

int main(void)
{
	char a;

	for (a = "97"; a < "122"; a++)
	{
		if (a != "161" && a != "145")
		{
			putchar(a);
		}
		putchar('\n');
	}
	return (0);
}

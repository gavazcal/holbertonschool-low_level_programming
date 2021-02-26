#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int index = 0;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

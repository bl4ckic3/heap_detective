#include <stdlib.h>
#include <stdio.h>

int main(void)
{   
	char *ch_ptr = malloc(100);
	for (i = 0; i < 99; i++) 
	{
		ch_ptr = 'A';
		printf("%s\n", ch_ptr);
	}

	free(ch_ptr);
	free(ch_ptr);
	
	return 0;

}

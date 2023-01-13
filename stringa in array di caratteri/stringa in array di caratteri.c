#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(int argc, char* argv[])
{
	char stringa[MAX_SIZE];
	printf("Inserire una stringa: ");
	gets(stringa);
	
	int i=0;
	while(stringa[i] != '\0')
	{
		printf("%c", stringa[i++]);
	}
	
	return 0;
}


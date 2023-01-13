#include <stdio.h>
int main(){
	FILE *f;
	char buffer[100];
	f=fopen(scanf("%s"),"a");
	printf("Scrivi qualcosa nel file: ");
	scanf("%s", &buffer);
	fflush(stdin);
	//printf("%s", buffer);
	fprintf(f, "%s", buffer);
	fclose(f);
	
}

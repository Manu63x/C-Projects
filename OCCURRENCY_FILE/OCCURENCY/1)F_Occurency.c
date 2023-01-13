#include <stdio.h>
#include <string.h>
int main(){
	FILE *fp;
	char filename[50+1];
	char word[50+1];
	char strtocmp[50+1]; //string to compare
	int count=0;
	printf("Inserisci nome file: ");
	scanf("%s", filename);
	fflush(stdin);
	strcat(filename, ".txt");
	fp=fopen(filename, "r");
	if(fp==NULL){
		printf("\nErrore!");
		return 1;
	}else{
		printf("\nInserisci la parola da ricercare in %s: ", filename);
		scanf("%s", word);
		fflush(stdin);
		while(!feof(fp)){
			fscanf(fp, "%s", strtocmp);
			if(strcmp(strtocmp, word)==0){
				count++;
			}
		}
		printf("\nLa tua parola e' presente %d volte", count);
		fclose(fp);
		return 0;
	}
	
}

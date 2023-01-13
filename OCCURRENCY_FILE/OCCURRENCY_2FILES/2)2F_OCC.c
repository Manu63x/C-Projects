#define MAX_LEN_FN	50
#define MAX_LEN_FWORD	50
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	FILE *fp1, *fp2;
	FILE *fpRes; //file pointer to the result file
	char fileName1[MAX_LEN_FN+1];
	char fileName2[MAX_LEN_FN+1];
	char fileNameRes[MAX_LEN_FN+1];
	char word1[MAX_LEN_FWORD+1], word2[MAX_LEN_FWORD+1]; //word1 = word readed from file1 word2= word readed from file2
	int ext=0;
	printf("Inserisci il nome del primo file: ");
	scanf("%s", fileName1);
	fflush(stdin);
	strcat(fileName1, ".txt"); //add file extension
	fp1=fopen(fileName1, "r");
	//file control
	if(fp1==NULL){
		printf("\nErrore! File non trovato.\n");
		system("PAUSE");
		exit(0);
	}
	printf("\nInserisci il nome del secondo file: ");
	scanf("%s", fileName2);
	fflush(stdin);
	strcat(fileName2, ".txt"); //add file extension
	fp2=fopen(fileName2, "r");
	//file control
	if(fp2==NULL){
		printf("\nErrore! File non trovato.\n");
		system("PAUSE");
		exit(0);
	}
	printf("\nInsersci il nome del file di ritorno: ");
	scanf("%s", fileNameRes);
	fflush(stdin);
	strcat(fileNameRes, ".txt");
	fpRes=fopen(fileNameRes, "w");
	rewind(fp1);
	rewind(fp2);
	while(!feof(fp1)){
		fscanf(fp1, "%s", word1); //read word from file 1
		rewind(fp2); //rewind file pointer from the previous instructions
		while(ext!=1){
			fscanf(fp2, "%s ", word2); //read word from file2
			if(strcmp(word1, word2)==0){
				fprintf(fpRes, "%s\n", word1); //printf word1 on the result file
				ext=1;
			}else if(feof(fp2)){
				ext=1;
			}
		}
		ext=0; //reassign value 0 for the next cycle
	}
	printf("\nParole ricorrenti in entrambi i file salvate in %s.", fileNameRes);
	fclose(fp1);
	fclose(fp2);
	fclose(fpRes);
	return 0;
}

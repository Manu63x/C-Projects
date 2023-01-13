#include <stdio.h>
#define NMAT	5
int main(){
	int i, j, nstud;
	char materie[NMAT][20]={"Italiano","Storia","Informatica","Sistemi","TPSI"};
	printf("--Registro-Elettronico--");
	printf("\nInserisci il numero di studenti: ");
	scanf("%d", &nstud);
	fflush(stdin);
	float registro[nstud][NMAT];
	float media[nstud];
	char alunni[nstud][15];
	for(i=0;i<nstud;i++){
		printf("Inserisci il nome dello studente n%d: ", i+1);
		scanf("%s", &alunni[i]);
		fflush(stdin);
	}
	for(i=0;i<nstud;i++){
		for(j=0;j<NMAT;j++){
			do{
				printf("Inserisci il voto di %s per %s: ", alunni[i], materie[j]);
				scanf("%f", &registro[i][j]);
				fflush(stdin);
			}while(registro[i][j]<0||registro[i][j]>10);
		}
	}
	for(i=0;i<nstud;i++){
		for(j=0;j<NMAT;j++){
			media[i]+=registro[i][j];
		}
		media[i]=media[i]/NMAT;
	}
	for(i=0;i<nstud;i++){
		printf("\nMedia di %s: %.1f", alunni[i], media[i]);
	}
}

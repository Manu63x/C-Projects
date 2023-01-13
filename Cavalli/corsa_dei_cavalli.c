#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define nCav 5

typedef struct cavallo{
	char nome[15];
	int t;
	int ttot;
}cavallo;
int main(){
	int i, j, k;
	float sharps;
    cavallo aH[5];
    cavallo tmp;
	srand(time(NULL));
	//assegnazione nome ai cavalli tramite dot notation e scanf
	for(i=0;i<5;i++){
		printf("Inserisci nome cavallo %d: ", i);
		scanf("%s", aH[i].nome);
	}
	//azzeramento variabile tempo totale nella struct
	for(j=0;j<5;j++){
			aH[j].ttot=0;
	}
	system("CLS");
	printf("****   Partita la gara !!!   ****");
	for(i=0;i<3;i++){
		//assegnazione valore tempo
		for(j=0;j<5;j++){
			aH[j].t=rand()%61+60;
		}
		
		switch(i){
			case 0:
				printf("\nEcco a voi i risultati del primo giro: ");
				break;
			case 1:
				printf("\nEcco a voi i risultati del secondo giro: ");
				break;
			case 2:
				printf("\nEcco a voi i risultati del terzo giro: ");
		}
		
		for(j=0;j<5;j++){
			printf("\nTempo %s: %d secondi.", aH[j].nome, aH[j].t);
		}
		printf("\n");
		for(j=0;j<5;j++){
			aH[j].ttot= aH[j].ttot+aH[j].t;
		}
		for(j=0;j<5;j++){
			sharps=(1/(float)aH[j].t)*1000;
			for(k=0;k<(int)sharps;k++){
				printf("#");
			}
			printf(": %s\n", aH[j].nome);
		}
	}
	printf("\nRisultati totali:\n\n");
	for(j=0;j<5;j++){
		sharps=(1/(float)aH[j].ttot)*10000;
		for(k=0;k<(int)sharps;k++){
			printf("#");
		}
		printf(": %s\n", aH[j].nome);
	}
	for(i=0; i<nCav; i++){
		for(j=i+1; j<nCav; j++){
			if(aH[i].ttot>aH[j].ttot){
				tmp=aH[i];
				aH[i]=aH[j];
				aH[j]=tmp;
			}
		}
	}
	for(i=0;i<nCav;i++){
		printf("\ntempo %s: %d", aH[i].nome, aH[i].ttot);
	}
	for(i=0;i<3;i++){
		printf("\nSi posiziona al %d posto: %s", i+1, aH[i].nome);
	}
	printf("\n");
	system("PAUSE");
	
}

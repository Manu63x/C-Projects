#define CLIENT_N_S	20
#define COD_FISC_L	17
#include <stdio.h>
#include <stdlib.h>
typedef struct barca{
	int tipoBarca;
	int typoProp;
	char matricola[CLIENT_N_S];
}barca;
typedef struct cliente{
	char nome[CLIENT_N_S+1];
	char cognome[CLIENT_N_S+1];
	char numeroCIden[10];
	char codFisc[COD_FISC_L+1];
	barca rentB;
	int stNol; //1 barca noleggiata, 0 barca riconsegnata
	int h;
	int m;
	int s;
}cliente;

int main(){
	int opt=0;
	int numClienti=0;
	int i;
	cliente aClienti[500];
	system("COLOR BC");
	do{
		printf("\n Benvenuto nel programma di noleggio barche!");
		printf("\n Scegli fra le seguenti opzioni:\n 1) Affittare una barca\n 2) Restituire barca\n 3) Visualizza tariffe\n 4) Visualizza nominativi barche attualmente noleggiate\n 5) Esci dal programma.\n Inserisci numero opzione: ");
		scanf("%d", &opt);
		switch(opt){
			case 1:
				system("CLS");
				printf("\n Affitta una barca ad un nuovo cliente!");
				printf("\n Nome cliente: ");
				scanf("%s", aClienti[numClienti].nome);
				printf("\n Cognome cliente: ");
				scanf("%s", aClienti[numClienti].cognome);
				printf("\n Numero carta d'identita cliente: ");
				scanf("%s", aClienti[numClienti].numeroCIden);
				printf("\n Codice fiscale cliente: ");
				scanf("%s", aClienti[numClienti].codFisc);
				printf("\n Categoria barca: ");
				scanf("%s", aClienti[numClienti].rentB.tipoBarca);
				do{
					printf("\n Tipo barca (0= Vela, 1= Motore): ");
					scanf("%s", aClienti[numClienti].rentB.tipoBarca);
				}while(aClienti[numClienti].rentB.tipoBarca!=0 && aClienti[numClienti].rentB.tipoBarca!=1);
				aClienti[numClienti].stNol=1;
				numClienti++;
				system("CLS");
				break;
			case 2:
				system("CLS");
				
				break;
			case 3:
				system("CLS");
				
				break;
			case 4:
				system("CLS");
				
				break;
		}
	}while(opt!=5);
}

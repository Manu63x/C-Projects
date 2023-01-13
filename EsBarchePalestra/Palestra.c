typedef struct attiv{
	char nAttiv[50];
	int nSerie;
	int nRipet;
	float tRecupero;
	char dataRM[11]; //data rinnovo o modifica dell'attività
}attiv;
typedef struct locale{
	int nLoc; //numero locale (1,2,3,4)
	float tariffe[10];
	int abbonati;
}locale;
typedef struct cliente{
	char nome[20];
	char cognome[20];
	char carId[20];
	char codFisc[20];
	char email[100];
	attiv scheda[20];
	int locale;
	int attivExtra[20];
}cliente;
int main(){
	locale locali[4];
	cliente clienti[1000];
	int totClienti=0;
	int sel=0;
	do{
		printf("Programma di gestione della palestra.\nCosa vuoi fare?\n1)Inserire nuovi dati per un utente\n2)Visualizzare i dati di un utente\n3)Modifica i dati di un utente\n4)Esci dal programma.");
		scanf("%d", &sel);
		fflush(stdin);
		switch(sel){
			case 1:
				system("CLS");
				printf("Inserire nome cliente: ");
				scanf("%s", )
		}
	}while(sel!=4);
}

#include <stdio.h>
int main(){
	int menu=0, i=0, nRand=0, acc=0, med=0, count=0, ciclExit=0, num, inP=0, inD=0;
	srand(time(NULL));
	do{
		printf("Scegliere il programma da eseguire.\nStruttura di controllo 1 (1), Struttura di controllo 2 (2)");
		scanf("%d", menu);
	}while(menu!=1||menu!=2);
	switch(menu){
		case 1:
			for(i=0; i<3; i++){
				printf("Generazione numeri.");
				sleep(1);
				system("CLS");
				printf("Generazione numeri..");
				sleep(1);
				system("CLS");
				printf("Generazione numeri...");
				sleep(1);
				system("CLS");
			}
			while(ciclExit==0){
				nRand=rand()%100+1;
				if(nRand<10||nRand>90){
					ciclExit=1;
				}else{
					if(nRand>20||nRand<80){
						count++;
						acc+=nRand;
						med=acc/count;
					}	
				}
			}
			printf("\nMedia: %d. Numero valori accettabili: %d", med, count);
			break;
		case 2:
			for(i=0;i<10;i++){
				printf("\nInserisci un valore: ");
				scanf("%d", &num);
				if(i%2==0){
					inP+=num;	
				}else{
					inD+=num;
				}
				printf("\nSomma numeri indice pari: %d", inP);
				printf("\nSomma numeri indice dispari: %d", inD);
			}
			break;	
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=0, nRand=0, acc=0, med=0, count=0, ciclExit=0;
	srand(time(NULL));
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
	return 0;
}

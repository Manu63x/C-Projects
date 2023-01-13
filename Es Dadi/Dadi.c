#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
		int i, nlanci, d1res, d2res, somma, somma2;
		float freq;
		somma2=0;
		srand(time(NULL));
		do{
		printf("Inserisci il numero di lanci da fare (Da 1 a 100): ");
		scanf("%d", &nlanci);
		}while(nlanci<1 || nlanci>100);
		for(i=0; i>=nlanci; i++){
		d1res=rand()%6+1;
		printf("%d", d1res);
		d2res=rand()%6+1;
		printf("%d", d2res);
		somma=d1res+d2res;
		somma2+=somma;
		printf("%d", somma2);
		}
	system("PAUSE");
}

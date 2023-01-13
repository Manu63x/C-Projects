#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int numelem, i, j, tmp, numres, trovato=0;
	srand(time(NULL));
	printf("Inserisci la lunghezza degli array: ");
	scanf("%d", &numelem);
	int a[numelem];
	int b[numelem];
	int c[numelem];
	for(i=0;i<numelem;i++){
		a[i]=rand()%101;
	}
	for(i=0;i<numelem;i++){
		b[i]=rand()%101;
	}
	printf("\nArray A:\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", a[i]);
	}
	printf("\nArray B:\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", b[i]);
	}
	for(i=0;i<numelem;i++){
		c[i]=a[i]+b[numelem-1-i];
	}
	printf("\nArray C:\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", c[i]);
	}
	for(i=0;i<numelem;i++){
		for(j=0;j<numelem;j++){
			if(c[i]<c[j]){
				tmp=c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}
	}
	printf("\nArray C ORDINATO:\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", c[i]);
	}
	printf("\nInserisci un numero da cercare nell'array C");
	scanf("%d", &numres);
	for(i=0;i<numelem;i++){
		if(c[i]==numres){
			trovato=1;
			printf("\nTrovato!! Posizione %d", i);
		}
	}
	if(trovato==0){
		printf("\nNon trovato.");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int numelem, i, j, max=0, min=0, tmp;
	float media=0;
	printf("Inserisci numero di elementi dell'array: ");
	scanf("%d", &numelem);
	int array[numelem];
	for(i=0;i<numelem;i++){
		array[i]=rand()%21-10;
	}
	printf("\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", array[i]);
	}
	for(i=0;i<numelem;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	for(i=0;i<numelem;i++){
		if(array[i]<min){
			min=array[i];
		}
	}
	for(i=0;i<numelem;i++){
		media=media+array[i];
	}
	media=media/numelem;
	printf("\nNumero Massimo: %d. Numero Minimo: %d. Media dei valori: %f", max, min, media);
	for(i=0;i<numelem/2;i++){
		tmp=array[i];
		array[i]=array[numelem-1-i];
		array[numelem-1-i]=tmp;
	}
	printf("\n");
	for(i=0;i<numelem;i++){
		printf("%d\t", array[i]);
	}
	printf("\n");
	system("PAUSE");
	
	
	
	
	
}

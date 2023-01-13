#define lenght	100
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a[lenght];
	int i, lun;
	srand(time(NULL));
	do{
	printf("Inserisci la lunghezza: ");
	scanf("%d", &lun);
	}while(lun>lenght||lun<1);
	for(i=0;i<lun;i++){
		a[i]=rand()%11+10;
	}
	for(i=0;i<lun;i++){
		printf("%d ", a[i]);
	}
}

//bin to dec converter
int bin[]={1,1,1,1,1,1,0,0,0,0,0,0};
#define ALENGHT	12
#include <stdio.h>
#include <math.h>
int main(){
	int s=0,pr,po,result,temp,i;
	int bin2[ALENGHT];
	for(i=0; i<ALENGHT; i++){
		printf("%d", bin[i]);
	}
	printf("\n\n");
	//riordinamento array
	for(i=0; i<ALENGHT; i++){
		bin2[i]=bin[ALENGHT-i-1];
	}
	//stampa array riordinato
	printf("Array riordinato:\n");
	for(i=0; i<ALENGHT; i++){
		printf("%d", bin2[i]);
	}
	for(i=0; i<ALENGHT; i++){
		po=pow(2,i);
		pr=bin2[i]*po;
		s+=pr;
	}
	printf("\n\nIl numero inserito in decimale e' %d.", s);
}

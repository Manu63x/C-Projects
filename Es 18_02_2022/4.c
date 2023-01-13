#include <stdio.h>
#define al	5
int main(){
	int a[al]={10,15,20,12,11};
	int somma, i;
	float media;
	for(i=0;i<al;i++){
		somma=somma+a[i];
	}
	media=(float)somma/al;
	printf("Media: %f", media);
}

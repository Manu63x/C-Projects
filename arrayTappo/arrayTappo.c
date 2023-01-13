#include <stdio.h>

float vector[]={2.5,3.6,-4.7,-274};

int main(){
	int i=0;
	float somma=0;
	while(vector[i] != -274){
		somma+=vector[i];
		i++;
	}
	somma/=i;
	printf("La media: %f", somma);
}

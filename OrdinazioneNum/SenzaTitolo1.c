#include <stdio.h>
int vector[]={1,3,5,2,6};
#define L_VECTOR	5
int main(){
	int sav, i, i2;
	for(i=0; i<L_VECTOR-1; i++){
		for(i2=i+1; i2<L_VECTOR; i2++){
			if(vector[i]>vector[i2]){
				sav=vector[i];
				vector[i]=vector[i2];
				vector[i2]=sav;
			}
		}
	}
	for(i=0; i<L_VECTOR; i++){
		printf("%d", vector[i]);
		if(i<L_VECTOR-1){
			printf(",");
		}
	}
}

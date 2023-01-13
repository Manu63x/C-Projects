#include <stdio.h>
#include <math.h>
#define MAX_ERR 1E-6 //1x10^-6
int main(){
	float n, sqrt, tmp;
	
	n=3.0;
	
	sqrt=1;
	
	tmp=n/sqrt;
	while(fabs(sqrt-tmp)>MAX_ERR){
		sqrt=(sqrt+tmp)/2;
		tmp=n/sqrt;
	printf("\nI valori intermedi sono %f %f", sqrt, tmp);
	}
	printf("\nLa radice di %f: %f", n, sqrt);
}

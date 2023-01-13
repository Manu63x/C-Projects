#define NMAX 20
#include <stdio.h>
int main(){
	int i, i2, N, n, c=10;
	
	do{
		printf("Dammi il numero di elementi: ");
		scanf("%d", &n);
	}while(n>NMAX||n<1);
	int a[n];
	do{
		printf("Dammi il numero posizione %d: ", i);
		scanf("%d", &N);
		if(N<=10||N>0){
			a[i]=N;
			i++;
		}	
	}while(i<n);
	for(i=0; i<n; i++){
		printf("%d,", a[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++){
		for(i2=0;i2<n;i2++){
			if(a[i2]>=c){
				printf("*\t");
			}else{
				printf(" \t");
			}
		}
		printf("\n");
		c--;
	}
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
}

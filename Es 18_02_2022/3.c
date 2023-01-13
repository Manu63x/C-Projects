#include <stdio.h>
#define al	5
int main(){
	int a[al]={10,15,20,12,11};
	int max, min, i;
	max=a[0];
	for(i=1;i<al;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Max: %d", max);
	min=a[0];
	for(i=0;i<al;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("Min: %d", min);
}

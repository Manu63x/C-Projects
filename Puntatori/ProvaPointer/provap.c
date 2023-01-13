#include <stdio.h>
int main(){
	int *p;
	int a[10];
	int i;
	for(i=0;i<10;i++){
		a[i]=i+1;
	}
	p=a;
	for(i=0;i<10;i++, p++){
		printf("%d ", *p);
	}
}

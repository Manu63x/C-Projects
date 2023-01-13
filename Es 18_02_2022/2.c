#include <stdio.h>
#define larr	5
int main(){
	int contenitore, i;
	int a[larr+1]={5,4,3,2,1};
	for(i=0;i<larr;i++){
		contenitore=a[i];
		a[i]=a[larr-1-i];
		a[larr-1-i]=contenitore;
	}
	for(i=0;i<larr;i++){
		printf("%d ", a[i]);
	}
}

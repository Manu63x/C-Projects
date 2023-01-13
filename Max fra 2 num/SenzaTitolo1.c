int max(int a[]){
	if(a[0]>a[1]){
		return a[0];
	}
	return a[1];
}
#include <stdio.h>
int main(){
	int array[2];
	array[0]=1;
	array[1]=2;
	max(array);
	printf("%d", max);
	
}

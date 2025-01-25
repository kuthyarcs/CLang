#include <stdio.h>
int main(){
	int num1=56;
	int i;
	printf("%d ",1);
	for(i=2;i<=num1/2; i++){
		if(num1%i==0){
			printf("%d ",i);
		}
	}
	printf("%d ",num1);
	return 0;
}

#include <stdio.h>
int main(){
	int num1=5;
	int fact=1;
	int i;
	for(i=1;i<=num1;i++){
		fact=fact*i;
	}
	printf("Factorial Of %d is %d",num1,fact);
	return 0;
}

#include <stdio.h>
int main(){
	int num1=0;
	int num2=1;
	int next;
	int i;
	printf("%d %d ",num1,num2);
	
	next=num1+num2;
	printf("%d ",next);
	for(i=1;i<10;i++){
		num1=num2;
		num2=next;
		next=num1+num2;
		printf("%d ",next);
	}
	return 0;
}

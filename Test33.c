#include <stdio.h>
int main(){
	int num1=456789;
	int quot=num1;
	int rem=0;
	do{
		rem=quot%10;
		quot=quot/10;
		printf("%d",rem);
		
	}
	while (quot!=0);
	
}

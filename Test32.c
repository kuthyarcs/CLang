#include <stdio.h>
int main(){
	int input1=456789;
	int num1=input1;
	int quot=num1;
	int rem=0;
	do{
		rem=quot%10;
		quot=quot/10;
		printf("%d\t%d\n",quot,rem);
		
	}
	while (quot!=0);
	
}

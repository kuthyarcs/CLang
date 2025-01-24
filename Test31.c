#include <stdio.h>
int main(){
	int input1=456;
	int num1=input1;
	int quot=num1;
	int rem=0;
	
	rem=quot%10;
	quot=quot/10;
	printf("%d\t%d\n",quot,rem);
	
	rem=quot%10;
	quot=quot/10;
	printf("%d\t%d\n",quot,rem);
	
	rem=quot%10;
	quot=quot/10;
	printf("%d\t%d\n",quot,rem);
	
}

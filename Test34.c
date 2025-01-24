#include <stdio.h>
#include <math.h>
int main(){
	int num1=123456;
	float num2=0;
	int quot=0;
	quot=num1;
	int rem=0;
	int count=5;
	do{
		rem=quot%10;
		quot=quot/10;
		num2 = num2+rem*pow(10,count);
		count--;
	}
	while (quot!=0);
	printf("\n%f\n",num2);
	
}

#include <stdio.h>
#include <math.h>
int main(){
	int num,temp,rev;
	printf("Enter the number\n");
	scanf("%d",&num);
	rev=0;
	temp=num;
	while(num!=0){
		rev=(rev*10)+(num%10);
		num=num/10;
	}
	printf("%d\n",rev);
	if(temp==rev){
		printf("It is a palindrome");
	}else{
		printf("It is not a palindrome");
	}
	return 0;

	
}

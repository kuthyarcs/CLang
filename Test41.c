#include <stdio.h>
int main(){
	int nums[]={25,50,75,100,125,150};
	printf("%d\n",nums[1]);
	nums[1]=10;
	printf("%d\n",nums[1]); 
	return 0;
}

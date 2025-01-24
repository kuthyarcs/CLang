#include <stdio.h>
int main(){
	int nums[]={25,50,75,100};
	printf("%d\n",nums[0]);
	printf("%d\n",nums[10]);  //some random number from buffer will be printed
	return 0;
}

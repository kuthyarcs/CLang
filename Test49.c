#include <stdio.h>
int main(){
	int nums[] = {10,25,50,75,100};
	int length = sizeof(nums)/sizeof(nums[0]);
	printf("%d", length);
	return 0;
}

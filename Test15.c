#include <stdio.h>
int main(){
	printf("Logical Operations\n");
	int a=10;
	printf("%d\n",a>3 && a<15);
	printf("%d\n",a<3 || a>15);
	printf("%d\n",!(a>20 ||a<15));
	return 0;
}

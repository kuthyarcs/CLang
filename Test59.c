#include <stdio.h>
#include <string.h>
int main(){
	char fullName[30];
	printf("Enter your full name and press enter: \n");
	fgets(fullName,sizeof(fullName),stdin);
	printf("Hello %s",fullName);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
	char s1[]="Hello";
	char s2[]="hello";
	char s3[]="Hello";
	printf("%d\n",strcmp(s1,s2));  //will return -1
	printf("%d\n",strcmp(s1,s3)); //will return 0
	return 0;
}

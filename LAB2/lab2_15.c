#include <stdio.h>

int main(){
	int a,s=0;
	printf("Enter a number to check for primality: ");
	scanf("%d",&a);
	for (int n=2;n<a;n++){
		if (a%n==0){
			s++;
		}
	}
	if (s==0){
		printf("Prime: True\n");
	}
	else{
		printf("Prime: False\n");
	}
	return 0;
}

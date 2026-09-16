#include <stdio.h>

int main(){
	int a, n=2;
	printf("Enter a number to check for primality: ");
	scanf("%d",&a);
	for (;n<=a;n++){
		if (a%n==0){
			break;
		}
	}
	if (n==a){
		printf("Prime: True\n");
	}
	else{
		printf("Prime: False\n");
	}
	return 0;
}

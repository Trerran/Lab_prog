#include <stdio.h>

int main(){
	int n=0,s=0;
	printf("Введите число, для которого нужно посчитать сумму чисел: ");
	scanf("%d",&n);
	for (int k=0;n!=0;n=n/10){
		k=n%10;
		s+=k;
	}
	printf("%d\n",s);
	return 0;
}

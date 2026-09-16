//11
#include <stdio.h>

int main(){
	int n;
	printf("Введите число: ");
	scanf("%d",&n);
	for (int k=0,m=1;m<=n;){
		k++;
		m=m*2;
		printf("%d\n",k-1);
	}
	return 0;
}

#include <stdio.h>

int main(){
	int n;
	int s=1;
	printf("Введите степень двойки: ");
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
		s*=2;
	}
	printf("%d\n",s);
	return 0;
}

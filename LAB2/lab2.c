#include <stdio.h>
#include <math.h>

int main(){
	int e, n,p=2,q,mes;
	printf("Открытый ключ: ");
	scanf("%d",&e);
	printf("Модуль: ");
        scanf("%d",&n);
	printf("Сообщение: ");
	scanf("%d", &mes);
	for (int d1=2,d2=2;p<=(int)(sqrt(n));){
		if (d1==p){
			q=n/p;
			if (d2==q && p*q==n){
				break;
			}
			else if  (q%d2==0){
				p++;
				d1=2;
				d2=2;
				continue;
			}
			else if (q%d2!=0){
				d2++;
				continue;
			}
		}
		else if (d1==p){
			d1=2;
			p++;
			continue;
		}
		else if (p%d1==0){
			p++;
			d1=2;
			continue;
		}
		else{
			d1++;
		}
	}
	int f,d,symb;
	f=(p-1)*(q-1);
	for (int i=0;;i++){
		if ((i*e)%f==1){
			d=i;
			break;
		}
	}
	long long int m=1;
	for (int i=0;d>i;i++){
		m=(m*mes)%n;
	}
	printf("Символ (ASCII): %lld\n",m);
	printf("Декодированный символ: %c\n", (char)m);
	return 0;
}


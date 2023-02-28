#include<stdio.h>
void leitura(int *n){
	do{
		printf("Informe um numero positivo: ");
		scanf("%d",n);
	}while( *n<=0);
	}
	


int ehprimo(int num){
		for(int i=2; i<num; i++){
			if(num%i==0){
			return 1;
			}
		}
			return 0;
		}


int main(){
	int num;
	leitura(&num);
	if(ehprimo(num)==0){
		printf(" O numero %d e primo.",num);
	}
		else{
			printf(" O numero %d nao e primo.",num);
		}
}


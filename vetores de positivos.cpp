#include<stdio.h>
#include<locale.h>
#define max 5

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet1[max];
	int i;
		for(i=0;i<max;i++){
			printf("Informe um valor: ");
			scanf("%d",&vet1[i]);
		}
			printf("\n Números primos \n");
		for(i=0;i<max;i++){
			if(vet1[i]%2==0){
			printf("%d, ",vet1[i]);
			}
	}
	
}


#include <stdio.h>
#define max 3

int main () {
	
	float vet[max], media, soma;
	int i;
	
	for(i=0;i<max;i++){
		
		printf("Informe o salario: ");
		scanf("%f", &vet[i]);
		
		soma= soma + vet[i];
		media = soma / max;
		
		
		
	}
	
	printf("Media dos salarios: %.2f", media);
}

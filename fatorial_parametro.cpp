#include <stdio.h>
#include <locale.h>

int fatorial (int fat, int n){
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;	
	return fat;
}
int main (){
	int n1, fato;
	setlocale (LC_ALL,"Portuguese");
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	fato = fatorial(fato, n1);

	printf("O fatorial de %d é: %d",n1, fato );

}

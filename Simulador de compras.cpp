#include <stdio.h>
           // Atividade 2 / AV1 introdu��o a programa��o //
             
// Nomes: F�bio Fellipe, Emilly Vilela, Jonas Euler, Jo�o Pedro Marques. //

int main(){
    int qtdP, qtdM, qtdG;
	float valortotal;
    printf("Seja bem-vindo(a) ao simulador de preco da fabrica de camisetas Estilo C!\n");
    printf("\nInforme a quantidade desejada de camisetas tamanho P: ");
    scanf("%d", &qtdP);
    printf("\nInforme a quantidade desejada de camisetas tamanho M: ");
    scanf("%d", &qtdM);
    printf("\nInforme a quantidade desejada de camisetas tamanho G: ");
    scanf("%d", &qtdG);
    valortotal = (qtdP * 10 ) + (qtdM * 12 ) + (qtdG * 15);
    printf("\nO valor total do pedido e de: R$ %.2f", valortotal);
}


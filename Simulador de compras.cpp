#include <stdio.h>
           // Atividade 2 / AV1 introdução a programação //
             
// Nomes: Fábio Fellipe, Emilly Vilela, Jonas Euler, João Pedro Marques. //

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


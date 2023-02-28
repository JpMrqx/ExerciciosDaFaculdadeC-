#include <stdio.h>
            // Atividade 3 / AV1 introdução a programação //
             
// Nomes: Fábio Fellipe, Emilly Vilela, Jonas Euler, João Pedro Marques. //

int main(){
	int idade;
	printf("Ola, Informe sua idade para lhe informamos qual sua classe votante: ");
	scanf("%d", &idade);
	if(idade < 16){
		printf("\nNao votante");
	}
	if(idade >= 18 && idade < 70){
		printf("\nVoto obrigatorio");
	}
	if(idade == 16 || idade == 17 || idade > 70){
		printf("\nVoto opcional");
	}
	
}

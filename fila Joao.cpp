#include <stdio.h>
#include <stdlib.h>

int const MAXTAM=3;

int Frente, Tras;
int Fila[MAXTAM];

void Fila_Construtor(){
    Frente=0;
    Tras=-1;
}

bool Fila_Vazia(){
    if(Frente>Tras){
        return true;
    }else{
        return false;
    }

}

bool Fila_Cheia(){
    if(Tras==MAXTAM-1){
        return true;
    }else{
        return false;
    }
}

bool Fila_Enfileirar(int valor){
    if(Fila_Cheia()){
        return false;
    }else{
        Tras++;
        Fila[Tras]=valor;
        return true;
    }
}

bool Fila_Desenfileirar(int &valor){
    if(Fila_Vazia()){
        return false;
    }else{
        valor=Fila[Frente];
        Frente++;
        return true;
    }
}

bool Fila_Get(int &valor){
    if(Fila_Vazia()){
        return false;
    }else{
        valor=Fila[Frente];
        return true;
    }
}

int Fila_Tamanho(){
    return (Tras - Frente)+1;
}

int main(){
	
	int i,f,opcao;

	for(int i = 0; i<MAXTAM; i++){
	
		printf("\n1-inserir\n");
		printf("2-excluir\n");
		printf("3-sair\n\n");
		scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			if(Fila_Cheia())
			{
				printf("\n A fila esta cheia\n");
			}
			else
			{
			
       			printf("\nInforme o valor que deseja inserir: ");
				scanf("%d", &f);
				Fila_Enfileirar(f);
			}
			break;
			
		case 2:
			if(Fila_Vazia())
			{
				printf("\nA fila esta vazia\n");
			}
			else
			{
				f = Fila_Desenfileirar(f);
				printf("\nValor retirado da fila: %d \n", f);	
			}
			break;
		case 3:
			printf("Programa finalizado");
			exit(0);
			
			default: printf("\nOpcao invalida\n");
		}
}
		while( Fila_Desenfileirar(f)){
				printf("%d ",f);
    }


  


}



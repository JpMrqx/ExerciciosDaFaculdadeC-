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
	
	int i;
	int f;

	for(int i = 1; i<=MAXTAM; i++){
		
	printf("Informe o valor: ");
	scanf("%d",&f);
	Fila_Enfileirar(f);

}
printf("\n\nTamanho:%d\n\n",Fila_Tamanho());
while( Fila_Desenfileirar(f)){
        printf("\nValor enfileirado:%d\n",f);
    }

  


}


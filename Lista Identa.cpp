#include <stdio.h>
#include <stdlib.h>


struct TabelaAps {
	int valor;
	struct TabelaAps *proximo;
} typedef T_APS;

int main(){
   // Declara��es
      T_APS *pLista;
      int valor, opcao = 0;
      
   // Fun��es
      void initLista(T_APS **pRecebido);
      void insertLista(T_APS **pRecebido);
      void buscaListaSimples(T_APS **pRecebido);
      T_APS removeElementoListaSimples(T_APS **pRecebido, int num);
      int leValor(int *valorRecebido);
   // Instru��es
      pLista = (T_APS *)malloc(sizeof(struct TabelaAps));
      initLista(&pLista);
      for(;;){
      	 printf("\n1 - Inserir :\n ");
         printf("\n2 - Consultar: \n");
         printf("\n3 - Remover \n");
         printf("\n4 - Sair\n\n");
         printf("\n\n----------------\n\n");
         scanf("%d", &opcao);
         opcao = leValor(&opcao);
         switch(opcao)
         {
            case 1:
          insertLista(&pLista);
          break;
       case 2:
          buscaListaSimples(&pLista);
          break;
       case 3:
       	printf("Por favor digite o valor que voc� deseja excluir: \n");
       	scanf("%d", &valor);
         removeElementoListaSimples(&pLista, valor);
         break;
       case 4:
         exit(0);
        }
     }
     return 0;
}
/*
   Inicializa��o da Lista Encadeada
*/
void initLista(T_APS **pRecebido){
   (*pRecebido)->proximo = NULL;
}

/*
   Fun��o para Inser��o no In�cio
*/
void insertLista(T_APS **pRecebido){
   // Declara��es
      T_APS *Aps;
	  Aps = (T_APS *)malloc(sizeof(T_APS));
     
	  Aps->proximo = (*pRecebido)->proximo;
      (*pRecebido)->proximo = Aps;  
   // Instru��es

        printf("\nInforme um valor: ");
		scanf("%d", &Aps->valor);
		printf("\n\n----------------\n\n");
 	
     
}
/*
   Fun��o para Percorrer Elementos
*/
void buscaListaSimples(T_APS **pRecebido){
   // Declara��es
      T_APS *Aps;
   // Instru��es
      if((*pRecebido)->proximo == NULL){
         printf("Lista Vazia!\n");
      }
      else{
         Aps = (T_APS *)malloc(sizeof(T_APS));
         Aps = (*pRecebido)->proximo;
         while(Aps != NULL){
         	
            printf("\nValores da Lista: %d\n", Aps->valor);
            printf("\n\n----------------\n\n");
            
            Aps = Aps->proximo;
         }
      }   
}
/*
   Remove Elemento da Cabe�a
*/
T_APS removeElementoListaSimples(T_APS **pRecebido, int num){
 T_APS *aux, *remover = NULL;

    if(*pRecebido){
        if((*pRecebido)->valor == num){
            remover = *pRecebido;
            *pRecebido = remover->proximo;
        }
        else{
            aux = *pRecebido;
            while(aux->proximo && aux->proximo->valor != num)
                aux = aux->proximo;
            if(aux->proximo){
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }
    }
}

int leValor(int *valorRecebido){
   // Declara��es
   // Instru��es
      while((*valorRecebido > 4) || (*valorRecebido < 1)){
         printf("Opcao Invalida. Informe novamente : \n");
         scanf("%d", &(*valorRecebido));
      }
      return(*valorRecebido);
}

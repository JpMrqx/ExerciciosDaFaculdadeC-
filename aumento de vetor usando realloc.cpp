#include <stdio.h>
#include <stdlib.h>
int main(){
int *vet;
	int qtde, i;
		vet = (int *) malloc(4*sizeof(int));
		if(vet==NULL){
			printf("\nErro");
				}
			else{
				for(i=0;i<4;i++){
				printf("Informe um valor para a posi��o %d: ",i);
				scanf("%d",&vet[i]);
					}
					printf("\nQuantas posi��es voc� deseja acrescentar? ");
					scanf("%d",&qtde);
						if(qtde>0){
						vet = (int*)realloc(vet,(qtde+4)*sizeof(int));
							if(vet!=NULL){
							int j;
							for(j=i;j<qtde+4;j++){
								printf("Informe um valor para a posi��o %d: ",j);
								scanf("%d",&vet[j]);
										}
										printf("\n\nVetor atualizado: ");
											for(i=0;i<j;i++){
											printf("%d ",vet[i]);
											}
										}
					else{
							printf("N�o foi possivel aumentar os espa�os.");
					}
				}
			}
 return 0;
}

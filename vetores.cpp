#include <stdio.h>
#include <locale.h>
#define max 15

int main() {
	setlocale(LC_ALL,"Portuguese");

    int num[max], cont, somatot, somaimpar, qtdimpar;
    float media=0;


    	for (cont=0; cont<max; cont++){
        printf ("Digite um n�mero [%d]: ", cont);
        scanf ("%d", &num[cont]);
        }

           	for(cont=0; cont<max ; cont++){
           		somatot+= num[cont];
				   
				if(num[cont]%2 != 0){
				
					somaimpar+= num[cont];
					 
					qtdimpar++;
					 
					media = somaimpar/qtdimpar;
				}
				
			}
					
    			
    			printf("\nA soma dos n�meros �: %d\n", somatot);
    			
    				if (qtdimpar==0){
    					printf("\nNenhum n�mero impar foi digitado.");
					}
					else{
						printf("\nA m�dia dos n�meros impares �: %.2f", media);	
					}
    			
  
    				return 0;
}

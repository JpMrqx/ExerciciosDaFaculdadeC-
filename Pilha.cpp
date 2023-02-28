#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct Pilha
{
	int topo;
	int capa;
	float *ponteiroElemento;
};

void CriaPilha(struct Pilha *p, int c)
{
	 p->topo = -1;
   	 p->capa = c;
   	 p->ponteiroElemento = (float*) malloc (c * sizeof(float));
}

bool VerificaVazia(struct Pilha *p)
{
	if( p->topo == -1)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

bool VerificaCheia(struct Pilha *p)
{
	if (p->topo == p->capa - 1)

		return true;

	else

		return false;
}

void Empilha (struct Pilha *p, float k)
{
	p->topo++;
	p->ponteiroElemento [p->topo] = k;
}

float Desempilha (struct Pilha *p)
{
	float aux = p->ponteiroElemento [p->topo];
	p->topo--;
	return aux;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	struct Pilha pilha;
	int tamanho, opcao;
	float valor;
	printf("\nQual será o tamanho da pilha? ");
	scanf("%d", &tamanho);
	CriaPilha(&pilha, tamanho);
	
	for(int i = 0; i<=tamanho; i++)
	{
		printf("\n1-inserir\n");
		printf("2-excluir\n");
		printf("3-sair\n");
		scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			if(VerificaCheia(&pilha))
			{
				printf("\nA pilha está cheia\n");
			}
			else
			{
				printf("\nInforme o valor que deseja inserir");
				scanf("%f", &valor);
				Empilha(&pilha, valor);
			}
			break;
			
		case 2:
			if(VerificaVazia(&pilha))
			{
				printf("A pilha está vazia");
			}
			else
			{
				valor = Desempilha(&pilha);
				printf("%.1f Valor retirado da pilha", valor);	
			}
			break;
			
		case 3:
			printf("Programa finalizado");
			exit(0);
			
			default: printf("Opcao invalida");
	}
}
}

#include <stdio.h>
int main(){
int idade,soma, cont;
float media;
soma = 0;
cont = 0;
printf("Informe uma idade (Digite um valor negativo para terminar a execu��o do programa):");
scanf("%d", &idade);
while (idade>=0){
soma = soma + idade;
cont = cont + 1;
printf("Informe uma idade (Digite um valor negativo para terminar a execu��o do programa):");
scanf("%d", &idade);
}
if (cont>0){
media=soma/cont;
printf("M�dia das idades: %.1f", media);
}
else
printf("N�o foram informadas idades v�lidas!");
}

#include<stdio.h>
#include <stdio.h>
int somaPar(int n){
int i, soma=0;
for(i=1;i<=n;i++){
if(i%2==0){
soma=soma+i;
}
}
return soma;
}

float medImpar(int n){
int i,qtdI=0;
float med=0;
for(i=1;i<=n;i++){
if(i%2==1){
qtdI++;
med=med+i;
}
}
med=med/qtdI;
return med;
}

int main(){
int num;
do{
printf("Informe um número inteiro positivo: ");
scanf("%d",&num);
} while(num<0);
printf("\nSoma dos números pares: %d\n",somaPar(num));
printf("\nMédia dos números ímpares: %.1f\n",medImpar(num));
}

#include<stdio.h>
#include<locale.h>
int fatorial(int num){
	if(num==0){	
		return 1;}
	else{
	return(num*fatorial(num-1));
}
}
	
int main(){
		setlocale(LC_ALL,"portuguese");
		int n,res;
		printf("Digite um numero: ");
		scanf("%d",&n);
		res= fatorial(n);
		printf("O fatorial de %d é: %d" ,n ,res);
	}

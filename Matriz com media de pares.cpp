#include<stdio.h>
#include<locale.h>

 

int main(){
    setlocale(LC_ALL,"Portuguese");
    int mat[3][3];
    int i, j;
    float soma, contador;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Informe o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j]%2==0){
                soma+=mat[i][j];
                contador+=1;
            }
        }
    }
    printf("\nA média dos valores pares é %.2f", soma/contador);
}

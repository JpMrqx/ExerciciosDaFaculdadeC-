#include <stdio.h>
int main (){
float nota1, nota2, media;
printf("Informe a primeira nota: ");
scanf("%f",&nota1);
printf("Informe a segunda nota: ");
scanf("%f",&nota2);
media = (nota1 + nota2)/2;
printf("Média: %.1f\n", media);
	if (media >= 7.0)
		printf("Aprovado!!!");
		else{
			if (media>=3.0 && media < 7.0)
				printf("Exame final");
					else
						printf("Reprovado!!!");
	}
}

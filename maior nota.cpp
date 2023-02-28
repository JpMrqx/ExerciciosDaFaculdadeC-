#include <stdio.h>
int main (){
float x,y,z;
printf("Nota 1: ");
scanf("%f",&x);
printf("Nota 2: ");
scanf("%f",&y);
	if(x>y)
		printf("Maior: %f",x);
			else {
				if(x==y)
					printf("igual");
						else
							printf("Maior: %f",y);				
	 }
}

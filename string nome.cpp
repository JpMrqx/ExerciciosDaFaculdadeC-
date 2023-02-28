#include <stdio.h>
#include <string.h>
int main (){
char string[51], str2[20];
printf ("Digite seu nome: ");
gets (string);
strcpy(str2, ", Bom dia!");
strcat(string, str2);
printf("\n%s",string);
}

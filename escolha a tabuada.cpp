#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    int ope, num1, i;
    printf("digite um opcao de 1, 2, 3, 4, 10 ou 20:\n");
    scanf("%d", &ope);
    switch (ope)
    {
    case 1:
        printf("voce escolheu a tabuada ate 10!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 10; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    case 2:
        printf("voce escolheu a tabuada ate 20!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 20; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    case 3:
        printf("voce escolheu a tabuada ate 30!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 30; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    case 4:
        printf("voce escolheu a tabuada ate 40!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 40; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    case 10:
        printf("voce escolheu a tabuada ate 100!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 100; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    case 20:
        printf("voce escolheu a tabuada ate 200!\n");
        printf("digite um numero:\n");
        scanf("%d", &num1);
        for (i = 1; i <= 200; i++)
        {
            printf("%d\n", num1 * i);
        }
        break;
    default:
        printf("digite outro numero");
        break;
    }
}
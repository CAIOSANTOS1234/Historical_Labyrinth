#include <stdio.h>
#include <stdlib.h>

void portugal();
void inglaterra();
void espanha();

void game()
{
    char opition;

    for (int i = 0; i < 1; i++)
    {
        system("cls");

        printf("Objetivo: Chegar no descobrimento do brasil\n\n");

        printf("1 - Portugal \n2 - Inglaterra \n3 - Espanha\n");
        printf("Escolha seu caminho: ");
        scanf("%s", &opition);

        switch (opition)
        {
        case '1':
            portugal();
            break;

        case '2':
            inglaterra();
            break;

        case '3':
            espanha();
            break;
        
        default:
            printf("Opcao errada");
            system("pause");
            i--;
            break;
        }
    }


}
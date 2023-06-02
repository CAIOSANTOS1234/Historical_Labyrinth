#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void game();

bool menu()
{
    int option;
    bool repetition = true;

    system("cls");
    printf("===Labirinto Historico===\n\n");
    printf("1 - Jogar\n2 - Sair\n\n");
    printf("escolha a opcao: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            game();
            return true;
            break;
        case 2:
            repetition = false;
            return false;
            
        default:
            system("cls");
            printf("##OPCAO ERRADA##");
            system("pause");
            break;
    }
}
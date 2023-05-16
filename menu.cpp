#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu()
{
    int option;
    bool repetition = true;

    do
    {
        system("cls");
        printf("===Labirinto Historico===\n\n");
        printf("1 - Jogar\n2 - Historico\n3 - Sair\n\n");
        printf("escolha a opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            //jogo
            repetition = true;
            break;
        case 2:
            //historico
            repetition = true;
            break;
        case 3:
            repetition = false;
            return;
        
        default:
            system("cls");
            printf("##OPCAO ERRADA##");
            system("pause");
            break;
        }
    }while(repetition == true);
}
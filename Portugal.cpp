#include <stdio.h>
#include <stdlib.h>

void portugal()
{
    char opition;


    for (int i = 0; i < 1; i++)
    {
        system("cls");

        printf("Objetivo: Chegar no descobrimento do brasil\n\n");

        printf("1 - 1500  \n2 - 1530  \n3 - 1488 \n");
        printf("Escolha seu caminho: ");
        scanf("%s", &opition);

        switch (opition)
        {
        case '1':
            printf("chegada dos portugueses com Pedro Álvares Cabral,\nem 22 de abril de 1500, à região costeira de onde hoje é a Bahia.\nSeria esse então o “descobrimento do Brasil”.\n");
            break;

        case '2':
            printf("Portugal envia Martim Afonso de Souza como chefe de uma\nexpedição colonizadora. Sua missão era combater os traficantes\nfranceses, que preocupavam a Coroa, estabelecer alguns núcleos \nde povoamento na região litorânea e buscar metais preciosos. Para/\nisso, foi Afonso de Souza designado capitão-mor, o que lhe acumulava/\na função de exercer a justiça civil e criminal, distribuir sesmarias, reivindicar\nterras em nome do rei e nomear funcionários para administração colonial\n");
            break;

        case '3':
            printf("Bartolomeu Dias foi o primeiro europeu a dobrar o Cabo das Tormentas.\n Na esperança de abrir novos caminhos às descobertas\n portuguesas o cabo foi rebatizado como sendo da Boa Esperança.\n No final do século XV, a marinha portuguesa já tinha explorado\n a maior parte da costa africana virada ao Atlântico.\n");
            break;
        
        default:
            printf("Opicao errada\n");
            system("pause");
            i--;
            break;
        }
        system("pause");
    }
}
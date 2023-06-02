#include <stdio.h>
#include <stdlib.h>

void inglaterra()
{
    char opition;

    for (int i = 0; i < 1; i++)
    {
        system("cls");

        printf("Obijetivo: Cegar no descobrimento do brasil\n\n");

        printf("1 - Entre 1497 e 1498 \n2 - entre 1584 e 1587 \n3 - 1485 \n");
        printf("Escolha seu caminho: ");
        scanf("%s", &opition);

        switch (opition)
        {
        case '1':
            printf("João e Sebastião Caboto, italianos, atingiram Labrador, no Canadá.\n");
            break;

        case '2':
            printf("Walter Raleigh fundou a primeira colônia inglesa na América,\n a colônia de Virgínia. Ele também tentou fundar algumas colônias na Flórida,\n mas não obteve sucesso.\n");
            break;

        case '3':
            printf("O início do reinado de Henrique VII. Ele era membro da família\n Tudor e tinha laços de família com as duas partes nobres que vinham se matando.\n A partir do reinado de Henrique VII a Inglaterra mergulhou de vez nas \nGrandes Navegações\n");
            break;
        
        default:
            printf("Opicao errada");
            system("pause");
            i--;
            break;
        }
    }

    system("pause");


}
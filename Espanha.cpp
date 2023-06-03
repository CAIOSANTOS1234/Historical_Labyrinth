#include <stdio.h>
#include <stdlib.h>

void espanha()
{
    char opition;

    for (int i = 0; i < 1; i++)
    {
        system("cls");

        printf("Objetivo: Chegar no descobrimento do brasil\n\n");

        printf("1 - 1492  \n2 - 1504  \n3 - 1494 \n");
        printf("Escolha seu caminho: ");
        scanf("%s", &opition);

        switch (opition)
        {
        case '1':
            printf("A primeira expedição espanhola foi liderada pelo genovês Cristóvão Colombo.\n Nela, três embarcações (Niña, Pinta e Santa María) saíram da Espanha\n visando a alcançar a Ásia. No entanto, essa expedição alcançou\n a região das Bahamas, no continente americano, em 12 de outubro\n de 1492.\n");
            break;

        case '2':
            printf("Colombo navegou pela costa da América Central, ainda na esperança de encontrar\n uma passagem para regiões produtoras de especiarias. Morreu em 1504,\n acreditando ter atingido um braço da Ásia e contrapondo-se\n à teoria de que, na verdade, as terras descobertas eram um novo continente.\n");
            break;

        case '3':
            printf("os espanhóis e os portugueses assinam o\nTratado de Tordesilhas que contestava a Bula Intern Coetera,\n que deixava Portugal com apenas 100 léguas das ilhas de\nCabo Verde, o que era basicamente oceano, sendo alterado para\n 300 léguas das ilhas, dando uma parte oriental da América para os portugueses.\n");
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
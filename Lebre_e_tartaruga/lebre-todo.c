//#define WINDOWS // Comente esta linha para usar no Linux/Unix!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef WINDOWS
#include <windows.h>
#else
#include <unistd.h>
#endif

void moveTartaruga(int, int *);
void moveLebre(int, int *);
void imprimePosicoesAtuaisSimples(int, int);
void imprimePosicoesAtuais(int ptrTar, int ptrLeb);

int main()
{
    int tartaruga = 1, lebre = 1;

    srand(time(NULL));

    while(tartaruga < 70 && lebre < 70)
    {
        moveTartaruga (rand()%10+1, &tartaruga);
        moveLebre (rand()%10+1, &lebre);

        /*TODO: depois que você executar o programa, comente a chamada
                para a  funcao imprimePosicoesAtuaisSimples() e
                descomente chamada para a funcao imprimePosicoesAtuais()*/
        //imprimePosicoesAtuaisSimples (tartaruga, lebre);
        imprimePosicoesAtuais (tartaruga, lebre);

#ifdef WINDOWS
        Sleep (100);
#else
        usleep (100000); // 100ms no Linux
#endif
    }

    if (tartaruga >= lebre && tartaruga >= 70)
        printf ("\nTartaruga ganhou!!!\n");
    else if (lebre >= tartaruga && lebre >= 70)
        printf ("\nLebre Ganhou!!!\n");

    return 0;
}

void moveTartaruga(int valor_sorteado, int *ptrTar)
{
    if(valor_sorteado <= 5)
        *ptrTar += 3;
    else if (valor_sorteado >= 7)
        *ptrTar -= 6;
    else
        *ptrTar += 1;

    if (*ptrTar < 1)
        *ptrTar = 1;
}

void moveLebre(int valor_sorteado, int *ptrLeb)
{
    // Lógica consertada para não sobrepor as condições
    if(valor_sorteado <= 2)       // 1, 2
        *ptrLeb += 0;
    else if (valor_sorteado <= 4) // 3, 4
        *ptrLeb += 9;
    else if (valor_sorteado == 5) // 5
        *ptrLeb -= 12;
    else if (valor_sorteado <= 8) // 6, 7, 8
        *ptrLeb += 1;
    else                          // 9, 10
        *ptrLeb -= 2;

    if (*ptrLeb < 1)
        *ptrLeb = 1;
}

void imprimePosicoesAtuaisSimples(int ptrTar, int ptrLeb)
{
    int i;

    for (i = 1; i < 71; i++)
        if (i == ptrTar && i == ptrLeb)
            printf("AI!!!");
        else if (i == ptrLeb)
            printf("L");
        else if (i == ptrTar)
            printf("T");
        else
            printf(" ");

    printf("\n");
}

void imprimePosicoesAtuais(int ptrTar, int ptrLeb)
{
    int i;
#ifdef WINDOWS
    system("cls");
#else
    system("clear");
#endif

    printf("\t\t\tPos. Tartaruga: %2d | Pos. Lebre: %2d\n",ptrTar, ptrLeb);
    printf("*******************************************************************************\n");
    for(i=1; i<ptrTar; i++)
        printf(" ");
    printf("      _\n");
    for(i=1; i<ptrTar; i++)
        printf(" ");
    printf("  .-./*)\n");
    for(i=1; i<ptrTar; i++)
        printf(" ");
    printf("_/___\\/\n");
    for(i=1; i<ptrTar; i++)
        printf(" ");
    printf("  U U");
    printf("\n*******************************************************************************\n\n");

    for(i=1; i<ptrLeb; i++)
        printf(" ");
    printf("    \\\\ \n");
    for(i=1; i<ptrLeb; i++)
        printf(" ");
    printf("     \\\\_ \n");
    for(i=1; i<ptrLeb; i++)
        printf(" ");
    printf("  .---(')\n");
    for(i=1; i<ptrLeb; i++)
        printf(" ");
    printf("o( )_-\\_");
    printf("\n*******************************************************************************\n");
}

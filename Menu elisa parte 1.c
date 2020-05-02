#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomesfig[8][100] = {"Quadrado", "Retângulo", "Triângulo Equilátero  ","Triângulo Retângulo   ","Outros","Sair", "Trapézio","Losango"};
    
    int Opcoes[6], op_escolhida;

    for (int i=1; i<=6; i++){
        Opcoes[i-1] = i;
    }

    while(op_escolhida != 6){
        printf("##############################################################\n");
        printf("###################### MENU DE OPÇÕES ########################\n");
        printf("##############################################################\n");
        printf("##                                                          ##\n");
        printf("## Escolha uma forma geométrica                             ##\n");
        printf("##                                                          ##\n");
        for(int j=0; j<=5; j++){
            printf("##  %d. %s ",Opcoes[j],nomesfig[j]);
            for(int h=0; h<=51-strlen(nomesfig[j]);h++){
                printf(" ");
            }
            printf("#");
            printf("#\n");
        }
        printf("##                                                          ##\n");
        printf("##############################################################\n");
        printf("##############################################################\n");
        printf("\n  Opção:");
        scanf("%d",&op_escolhida);
    }

    return 0;
}
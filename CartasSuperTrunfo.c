#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo - Nível Novato\n");
};

// Estrutura das cartas:{
char Estado;
char Código_da_Carta [5];
char Nome_da_Cidade [50];
int População;
float Área_em_Km2;
float PIB;
int Números_de_Pontos_Turísticos;

int main(){
    printf("Cadastro da Carta 1\n");

    printf ("Digite o Estado (A a H):\n");
    scanf ("%c" , Estado);

    printf ("Digite o Código da Carta (Ex: A01):\n");
    scanf ("%s" , Código_da_Carta);

    printf ("Digite o Nome da Cidade \n");

    printf ("Digite a População:\n");
    scanf ("%d" , População);

    printf ("Digite a Área em Km2:\n");
    scanf ("%f" , Área_em_Km2);

    printf ("Digite o PIB:\n");
    scanf ("&f" , PIB) ;

    printf ("Digite o Número de Pontos Turísticos:\n");
    scanf ("%d" , Números_de_Pontos_Turísticos);


    printf("Cadastro da Carta 2\n");

    printf ("Digite o Estado (A a H):\n");
    scanf ("%c" , Estado);

    printf ("Digite o Código da Carta (Ex: A01):\n");
    scanf ("%s" , Código_da_Carta);

    printf ("Digite o Nome da Cidade \n");

    printf ("Digite a População:\n");
    scanf ("%d" , População);

    printf ("Digite a Área em Km2:\n");
    scanf ("%f" , Área_em_Km2);

    printf ("Digite o PIB:\n");
    scanf ("&f" , PIB) ;

    printf ("Digite o Número de Pontos Turísticos:\n");
    scanf ("%d" , Números_de_Pontos_Turísticos);

    // Exibição dos dados das Cartas
    printf ("\n\n Informações das Cartas \n");

    printf("\n Carta 1:\n");

    printf("Estado: %c\n" , Estado);

    printf("Código da Carta: %s\n" , Código_da_Carta);

    printf("Nome da Cidade: %s\n" , Nome_da_Cidade);

    printf("População: %d\n" , População);

    printf ("Área em Km2: %f\n" , Área_em_Km2);

    printf ("PIB: &f\n" , PIB) ;

    printf ("Números de Pontos Turísticos: %d\n" , Números_de_Pontos_Turísticos);


      printf("\n Carta 2:\n");

      printf("Estado: %c\n" , Estado);

    printf("Código da Carta: %s\n" , Código_da_Carta);

    printf("Nome da Cidade: %s\n" , Nome_da_Cidade);

    printf("População: %d\n" , População);

    printf ("Área em Km2: %f\n" , Área_em_Km2);

    printf ("PIB: &f\n" , PIB) ;

    printf ("Números de Pontos Turísticos: %d\n" , Números_de_Pontos_Turísticos);

    return 0;
}

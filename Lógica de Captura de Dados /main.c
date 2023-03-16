#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;
    char cidade_natal[256];

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nShow de bola %s... Qual sua idade?",nome);
    scanf("%d",&idade);

    printf("Muito bom! O %s tem %d anos. \nQual seu ano de nascimento?",nome,idade);
    scanf("%d",&ano_nascimento);

    printf("Muito Obrigado! O Sr %s tem %d Anos e nasceu no ano de %d. \nQual seria o seu sobrenome?",nome,idade,ano_nascimento);
    scanf("%s",sobrenome);

    printf("Muito Obrigado! O Sr %s %s tem %d Anos e nasceu no ano de %d. \nPara finalizar, Qual seria a sua cidade natal?",nome,sobrenome,idade,ano_nascimento);
    scanf("%s",cidade_natal);

    printf("Muito Obrigado! O Sr %s %s tem %d Anos e nasceu no ano de %d em %s. \nAtendimento finalizado, tenha um bom dia!.",nome,sobrenome,idade,ano_nascimento,cidade_natal);

    return 0;
}

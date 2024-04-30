#include <stdio.h>
#include <conio.h>

typedef struct criatura
{
    int xp;
}Criatura;

typedef struct heroi
{
    Criatura humano;
    char nome[50];
}Heroi;



int main(){
    Criatura slime, ogro, dragao;
    Heroi heroi;
    int sair = 0;
    int escolha;
    slime.xp = 100;
    ogro.xp = 500;
    dragao.xp = 2000;
    heroi.humano.xp = 0;
    printf("Digite seu nome: ");
    scanf("%s", &heroi.nome);
    while(!sair){
        printf("\nEscolha um monstro para matar: ");
        printf("\n1- slime");
        printf("\n2- ogro");
        printf("\n3- dragao");
        printf("\n4 - sair\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            heroi.humano.xp += slime.xp;
            break;
        
        case 2:
            heroi.humano.xp += ogro.xp;
            break;
        
        case 3:
            heroi.humano.xp += dragao.xp;
            break;
        
        default:
            sair = 1;
            break;
        }
    }
    
    if(heroi.humano.xp < 1000){
        printf("\nO Heroi de nome %s esta no nivel de Ferro", heroi.nome);
    }
    else if(heroi.humano.xp < 2000){
        printf("\nO Heroi de nome %s esta no nivel de Bronze", heroi.nome);
    }
    else if(heroi.humano.xp < 5000){
        printf("\nO Heroi de nome %s esta no nivel de Prata", heroi.nome);
    }
    else if(heroi.humano.xp < 7000){
        printf("\nO Heroi de nome %s esta no nivel de Ouro", heroi.nome);
    }
    else if(heroi.humano.xp < 8000){
        printf("\nO Heroi de nome %s esta no nivel de Platina", heroi.nome);
    }
    else if(heroi.humano.xp < 9000){
        printf("\nO Heroi de nome %s esta no nivel de Ascendente", heroi.nome);
    }
    else if(heroi.humano.xp < 10000){
        printf("\nO Heroi de nome %s esta no nivel de Imortal", heroi.nome);
    }
    else{
        printf("\nO Heroi de nome %s esta no nivel de Radiante", heroi.nome);
    }
}
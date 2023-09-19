#include <stdio.h>

int main() {
    // Variáveis para armazenar o nome e a quantidade de experiência (XP) do herói
    char nomeDoHeroi[50]; 
    int xpDoHeroi;

    // Solicitar ao usuário que insira o nome do herói
    printf("Digite o nome do herói: ");
    scanf("%s", nomeDoHeroi);

    // Solicitar ao usuário que insira a quantidade de experiência (XP) do herói
    printf("Digite a quantidade de experiência (XP) do herói: ");
    scanf("%d", &xpDoHeroi);

    // Estrutura de decisão para determinar o nível do herói com base na XP
    char* nivelDoHeroi;
    if (xpDoHeroi < 1000) {
        nivelDoHeroi = "Ferro";
    } else if (xpDoHeroi >= 1001 && xpDoHeroi <= 2000) {
        nivelDoHeroi = "Bronze";
    } else if (xpDoHeroi >= 2001 && xpDoHeroi <= 5000) {
        nivelDoHeroi = "Prata";
    } else if (xpDoHeroi >= 6001 && xpDoHeroi <= 7000) {
        nivelDoHeroi = "Ouro";
    } else if (xpDoHeroi >= 7001 && xpDoHeroi <= 8000) {
        nivelDoHeroi = "Platina";
    } else if (xpDoHeroi >= 8001 && xpDoHeroi <= 9000) {
        nivelDoHeroi = "Ascendente";
    } else if (xpDoHeroi >= 9001 && xpDoHeroi <= 10000) {
        nivelDoHeroi = "Imortal";
    } else {
        nivelDoHeroi = "Radiante";
    }

    // Exibir a mensagem com o nome e o nível do herói
    printf("Parabéns %s, você é um herói do nível %s\n", nomeDoHeroi, nivelDoHeroi);

    return 0;
}
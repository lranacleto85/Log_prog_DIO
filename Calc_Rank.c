#include <stdio.h>

char* calcularNivel(int vitorias) {
    char* nivel;
    if (vitorias < 10) {
        nivel = "Ferro";
    } else if (vitorias > 10 && vitorias <= 20) {
        nivel = "Bronze";
    } else if (vitorias > 20 && vitorias <= 50) {
        nivel = "Prata";
    } else if (vitorias > 50 && vitorias <= 80) {
        nivel = "Ouro";
    } else if (vitorias > 80 && vitorias <= 90) {
        nivel = "Diamante";
    } else if (vitorias > 90 && vitorias <= 100) {
        nivel = "Lendário";
    } else {
        nivel = "Imortal";
    }
    return nivel;
}

int main() {
    char nomeDoHeroi[50];
    int vitorias;
    int derrotas;
    int saldoVitorias;

    printf("Qual o nome do seu herói? ");
    scanf("%s", nomeDoHeroi);

    printf("Quantas vitórias ele tem? ");
    scanf("%d", &vitorias);

    printf("Quantas derrotas ele tem? ");
    scanf("%d", &derrotas);

    // Cálculo do saldo de Rankeadas
    saldoVitorias = vitorias - derrotas;

    // Determinar o nível do jogador com base nas vitórias
    char* nivel = calcularNivel(vitorias);

    printf("Parabéns %s, você é um herói do nível %s e seu saldo é de %d\n", nomeDoHeroi, nivel, saldoVitorias);

    return 0;
}
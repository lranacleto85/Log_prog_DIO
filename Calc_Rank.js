function calcularNivel(vitorias) {
    let nivel;
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

function main() {
    const nomeDoHeroi = prompt("Qual o nome do seu herói?");
    const vitorias = parseInt(prompt("Quantas vitórias ele tem?"));
    const derrotas = parseInt(prompt("Quantas derrotas ele tem?"));

    // Cálculo do saldo de Rankeadas
    const saldoVitorias = vitorias - derrotas;

    // Determinar o nível do jogador com base nas vitórias
    const nivel = calcularNivel(vitorias);

    console.log(`Parabéns ${nomeDoHeroi}, você é um herói do nível ${nivel} e seu saldo é de ${saldoVitorias}`);
}

main();
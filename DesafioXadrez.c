 #include <stdio.h>

int main() {
    // Movimento da Torre usando FOR
    printf("Movimento da Torre:\n");
    for (int contador_torre = 0; contador_torre < 5; contador_torre++) {
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para separar as peças

    // Movimento do Bispo usando WHILE
    printf("Movimento do Bispo:\n");
    int contador_bispo = 0; // Novo contador para o Bispo
    while (contador_bispo < 5) {
        printf("Cima, Direita\n"); // Adicionado \n
        contador_bispo++;
    }
    printf("\n"); // Adiciona uma linha em branco para separar as peças

    // Movimento da Rainha usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int contador_rainha = 0; // Novo contador para a Rainha
    if (8 > 0) { // Garante que o do-while execute pelo menos uma vez se o número de casas for > 0
                 // e corretamente se o número de casas for 0 (não executaria o printf).
                 // Para 8 casas, essa verificação é mais para robustez geral.
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < 8);
    }
    printf("\n"); // Adiciona uma linha em branco para separar as peças

    return 0; // Boa prática adicionar return 0 no final do main
}
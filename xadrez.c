#include <stdio.h>

//declaração de variáveis
int main(void) {
    const int torre = 5; //mover a Torre 5 casas para a direita
    const int bispo = 5; //mover o Bispo 5 casas para cima e à direita
    const int rainha = 8; //mover a Rainha 8 casas para esquerda

    int i; //variavel de controle para os loops

// --- Movimento da Torre ---
    printf("Movimento da Torre:\n");
for (int i = 0; i < torre; i++) {
    printf("Direita\n");
} 
    printf("\n");   

//--- Movimento do Bispo ---
    printf("Movimento do Bispo:\n");
    i = 0;
while (i < bispo) {
    printf("Cima, Direita\n");
    i++;
}
printf("\n");

//--- Movimento da Rainha ---
    i = 0;
    printf("Movimento da Rainha:\n");
    i = 0;
do {
    printf("esquerda\n");
    i++;
} while (i < rainha);
    printf("\n");


return 0;
}
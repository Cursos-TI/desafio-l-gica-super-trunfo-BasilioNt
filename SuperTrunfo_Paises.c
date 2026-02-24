#include <stdio.h>

typedef struct {
   char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
} Carta;

int main() {
    
    Carta c1 = {"Brasil", 230000000, 8516000, 12.630, 180, 27.01};
    Carta c2 = {"Russia", 143000000, 17100000, 213.5, 200, 8.36};

    int opcao;

    printf("--- MENU DE COMPARAÇÃO ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n### Comparando: %s X %s ###\n", c1.nome, c2.nome);

    switch (opcao) {
        case 1:
                printf("Atributo: Populacao\n");
                printf("%s: %d X %s: %d\n", c1.nome, c1.populacao, c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao){
                 printf("Vencedor: %s\n", c1.nome);
            } else if (c1.populacao < c2.populacao){
                 printf("Vencedor: %s\n", c2.nome);
            } else {
                 printf("Empate!\n");
            } break;

        case 2:
                printf("Atributo: Area\n");
                printf("%s: %.2f X %s: %.2f\n", c1.nome, c1.area, c2.nome, c2.area);
            if (c1.area > c2.area){
                printf("Vencedor: %s\n", c1.nome);
            } else if (c1.area < c2.area){
                printf("Vencedor: %s\n", c2.nome);
            } else {
                 printf("Empate!\n");
            } break;

        case 3:
                printf("Atributo: PIB\n");
                printf("%s: %.2f X %s: %.2f\n", c1.nome, c1.pib, c2.nome, c2.pib);
            if (c1.pib > c2.pib){
                printf("Vencedor: %s\n", c1.nome);
            } else if (c1.pib < c2.pib) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            } break;

        case 4:
                printf("Atributo: Pontos Turisticos\n");
                printf("%s: %d X %s: %d\n", c1.nome, c1.pontos_turisticos, c2.nome, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos){
                printf("Vencedor: %s\n", c1.nome);
            } else if (c1.pontos_turisticos < c2.pontos_turisticos){
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            } break;

        case 5:
                printf("Atributo: Densidade Demografica (Menor valor vence)\n");
                printf("%s: %.2f X %s: %.2f\n", c1.nome, c1.densidade, c2.nome, c2.densidade);
           
            if (c1.densidade < c2.densidade){
                printf("Vencedor: %s\n", c1.nome);
            } else if (c1.densidade > c2.densidade) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            } break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
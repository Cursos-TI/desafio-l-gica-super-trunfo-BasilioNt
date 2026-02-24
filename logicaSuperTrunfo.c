
#include <stdio.h>
#include <string.h>


int main(){
   
    char estado1[50], codigo1[50], cidade1[100], estado2[50], codigo2[50], cidade2[100];//%s
    float area1, pib1, dp1, pibpc1, area2, pib2, dp2, pibpc2, calcpibpc1, calcpibpc2;//$f
    int pontur1,pontur2;//%d
    unsigned long int populacao1, populacao2;//%lu
    float sp1, sp2;//Super Poder = População + Área + PIB + Pontos Turísticos + PIB per Capita + (1 / Densidade)
    
    
    
    printf("***Digite os valores das cartas do Super Trunfo***\n");
    
    
    printf("Carta 1 - Estado: ");
    //scanf("%[^\n]%*c", estado1);
    fgets(estado1, 50, stdin);// texto com espaço
    estado1[strcspn(estado1, "\n")]='\0';//tira espaço entre linhas
    
    printf("Carta 2 - Estado: ");
    //scanf("%[^\n]%*c", estado2);
    fgets(estado2, 50, stdin);// texto com espaço
    estado2[strcspn(estado2, "\n")]='\0';//tira espaço entre linhas
     
    printf("Carta 1 - Código da Carta: ");
    //scanf("%[^\n]%*c", codigo1);
    fgets(codigo1, 50, stdin);// texto com espaço
    codigo1[strcspn(codigo1, "\n")]='\0';//tira espaço entre linhas
    
    printf("Carta 2 - Código da Carta: ");
    //scanf("%[^\n]%*c", codigo2);
    fgets(codigo2, 50, stdin);// texto com espaço
    codigo2[strcspn(codigo2, "\n")]='\0';//tira espaço entre linhas

    printf("Carta 1 - Nome da Cidade: ");
    //scanf("%[^\n]%*c", cidade1);
    fgets(cidade1, 100, stdin);// texto com espaço
    cidade1[strcspn(cidade1, "\n")]='\0';//tira espaço entre linhas
    
    printf("Carta 2 - Nome da Cidade: ");
    //scanf("%[^\n]%*c", cidade2);
    fgets(cidade2, 100, stdin);// texto com espaço
    cidade2[strcspn(cidade2, "\n")]='\0';//tira espaço entre linhas
    
    
    printf("Carta 1 - Quantidade da População: ");
    scanf("%lu", &populacao1);
   
    printf("Carta 2 - Quantidade da População: ");
    scanf("%lu", &populacao2);
    
    printf("Carta 1 - Área em Km²: ");
    scanf("%f", &area1);
   
    printf("Carta 2 - Área em Km²: ");
    scanf("%f", &area2);   
    
    printf("Carta 1 - PIB da ciadade em Bilhões de Reais: ");
    scanf("%f", &pib1);
   
    printf("Carta 2 - PIB da ciadade em Bilhões de Reais: ");
    scanf("%f", &pib2);
    
    
    printf("Carta 1 - Quantidade de pontos Turisticos: ");
    scanf("%d", &pontur1);
   
    printf("Carta 2 - Quantidade de pontos Turisticos: ");
    scanf("%d", &pontur2);
    
    printf("\n");
    
    
    
    dp1 = populacao1 / area1; //Densidade Populaciona
    calcpibpc1 = pib1 * 1000000000;
    pibpc1 = calcpibpc1 / populacao1; //PIB per Capita
    sp1 = populacao1 + area1 + pib1 + pontur1 + pibpc1 + (1/dp1);//Super Poder
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontur1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super poder Carta 1: %.2f\n", sp1);
    printf("\n");

   
    dp2 = populacao2 / area2; //Densidade Populaciona
    calcpibpc2 = pib2 * 1000000000;
    pibpc2 = calcpibpc2 / populacao2; //PIB per Capita
    sp2 = populacao2 + area2 + pib2 + pontur2 + pibpc2 + (1/dp2);//Super Poder
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontur2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super poder Carta 2: %.2f\n", sp2);
    printf("\n");
   
   
 
    printf("Comparação de Cartas (Atributo: População):\n");

    if (populacao1 > populacao2){

        printf("Carta 1 - %s (%s): %lu \n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu \n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) Venceu! \n", cidade1);

    } else {
        printf("Carta 1 - %s (%s): %lu \n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu \n", cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
    }

    return 0;


}


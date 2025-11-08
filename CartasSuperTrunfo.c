# include <stdio.h>
 
    // Declaração das variaveis da primeira carta

    char Estado1[20] = "Alagoas";
    char Codigo1[20] = "A01";
    char Cidade1[20]="Maceio";
    int Populacao1 = 958000;
    float Area1 = 509.0; 
    float PIB1 = 27.0;
    int Pontos_Turisticos1 = 40;

    // Declaração das variaveis da segunda carta

    char Estado2[20] = "Bahia";
    char Codigo2[20] = "B02";
    char Cidade2[20] = "Salvador";
    int Populacao2 = 2.4; 
    float Area2 = 694.0; // Km2
    float PIB2 = 63.0; //Bilhões
    int Pontos_Turisticos2 = 45; // Und

   // Declaração das funções da primeira carta

    void entrada1();
    void saida1();
    void entrada2();
    void saida2();

    // Funções  
    
    int main() {
        printf("\n*** Super Trunfo ***\n");
        printf("\n--- Cadastro Carta 1 ---\n");
        entrada1();
        saida1 ();

        printf("\n--- Cadastro Carta 2 ---\n");
        entrada2();
        saida2();

        return 0;
    }

    // Entrada de dados da primeira carta

    void entrada1 () {
        printf("Nome do Estado1 é:\n");
        scanf("%19s", Estado1);

        printf("Codigo1 é: \n");
        scanf("%19s", Codigo1);

        printf("Nome da Cidade1 é: \n");
        scanf("%19s", Cidade1);

        printf("Populacao1 (em Milhares) é: \n");
        scanf("%d", &Populacao1);

        printf("Area1 em Km2 é: \n");
        scanf("%f", &Area1);

        printf("Valor do PIB1 (em Bilhões) é: \n");
        scanf("%f", &PIB1);

        printf("Numero de Pontos Turisticos1 é: \n");
        scanf("%d", &Pontos_Turisticos1);

    }

    // Impressão final - Exibição de dados da primeira carta

    void saida1 () {
        printf("\n--- Dados da Carta1 ---\n");
        printf("Estado é: %s\n", Estado1);
        printf("Codigo é: %s\n", Codigo1);
        printf("Nome Cidade é: %s\n", Cidade1);
        printf("Populacao é: %d Mil Habitantes\n", Populacao1);
        printf("Area é: %.2f Km2 \n", Area1);
        printf("PIB é: %.2f Bilhões\n", PIB1);
        printf("Pontos Turisticos1 é: %d \n", Pontos_Turisticos1);

        }

       // Entrada de dados da segunda carta

    void entrada2 () {
        printf("Nome do Estado2 é:\n");
        scanf("%19s", Estado2);

        printf("Codigo2 é: \n");
        scanf("%19s", Codigo2);

        printf("Nome da Cidade2 é: \n");
        scanf("%19s", Cidade2);

        printf("Populacao2 (em Milhares) é: \n");
        scanf("%d", &Populacao2);

        printf("Area2 em Km2 é: \n");
        scanf("%f", &Area2);

        printf("Valor do PIB2 (em Bilhões) é: \n");
        scanf("%f", &PIB2);

        printf("Numero de Pontos Turisticos2 é: \n");
        scanf("%d", &Pontos_Turisticos2);

    }
    // Impressão final - Exibição de dados da segunda carta

    void saida2 () {
        printf("\n--- Dados da Carta2 ---\n");
        printf("Estado2 é: %s\n", Estado2);
        printf("Codigo2 é: %s\n", Codigo2);
        printf("Nome Cidade2 é: %s\n", Cidade2);
        printf("Populacao2 é: %d Mil Habitantes\n", Populacao2);
        printf("Area2 é: %.2f Km2 \n", Area2);
        printf("PIB2 é: %.2f Bilhões\n", PIB2);
        printf("Pontos Turisticos2 é: %d \n", Pontos_Turisticos2);

        }


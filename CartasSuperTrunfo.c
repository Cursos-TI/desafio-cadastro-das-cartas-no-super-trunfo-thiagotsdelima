#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int códigoDaCidade = 0;
    int população = 0;
    float área = 0.0;
    float PIB = 0.0;
    int númeroDePontosTurísticos = 0;
    char nome[50] = "";
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 
 // Get code with error city 
    printf("Digite o código da cidade: \n");
    while (scanf("%d", &códigoDaCidade) != 1) {
        printf("Entrada inválida. Digite um número inteiro para código da cidade: \n");
        limpar_buffer();
    }
    limpar_buffer();
    
    // Get registration number with error peoples 
    printf("Digite a população: \n");
    while (scanf("%d", &população) != 1) {
        printf("Entrada inválida. Digite um número inteiro para população: \n");
        limpar_buffer();
    }
    limpar_buffer();
    
    // Get space with error area
    printf("Digite a área: \n");
    while (scanf("%f", &área) != 1) {
        printf("Entrada inválida. Digite um número decimal para área: \n");
        limpar_buffer();
    }
    limpar_buffer();

    // Get space with error PIB
   printf("Digite o PIB: \n");
    while (scanf("%f", &PIB) != 1) {
        printf("Entrada inválida. Digite um número decimal para PIB: \n");
        limpar_buffer();
    }
    limpar_buffer();

    // Get registration number with error number of tourist attractions 
   printf("Digite o número de pontos turísticos: \n");
    while (scanf("%d", &númeroDePontosTurísticos) != 1) {
        printf("Entrada inválida. Digite um número inteiro para número de pontos turísticos: \n");
        limpar_buffer();
    }
    limpar_buffer();
    
    // Get name
    printf("Digite o nome da cidade: \n");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        printf("Erro ao ler o nome.\n");
        return 0;
    }

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      
    // Display all city information with clear formatting
    printf("\n=== Informações da Cidade ===\n");
    printf("Código da Cidade: %d\n", códigoDaCidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", área);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", númeroDePontosTurísticos);
    return 0;
}

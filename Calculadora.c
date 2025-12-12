#include <stdio.h>

void start(int *escolha, int *quant_numeros, float numeros[]);
void soma(int quant_numeros, float numeros[]);
void subtracao(int quant_numeros, float numeros[]);
void divi(int quant_numeros, float numeros[]);
void multi(int quant_numeros, float numeros[]);
void linha();

int main(void){
    int escolha = 0;
    float numeros[100];
    int quant_numeros = 0;
    start(&escolha, &quant_numeros, numeros);
    linha();
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
    return 0;

}

void linha(){
    printf("\n");
}

void start(int *escolha, int *quant_numeros, float numeros[]){
    do{
    printf("1 - Somar | 2 - Subtrair | 3 - Dividir | 4 - Multiplicar | 5 - Sair\n");
    printf("Agora escolha a o que deseja: ");
    scanf("%d", escolha);

    if (*escolha >= 1 && *escolha <= 4){
        printf("Quantos numeros deseja digitar? ");
        scanf("%d", quant_numeros);

        for (int i = 0; i < *quant_numeros; i++){
            printf("Digite o numero %d: ", i + 1);
            scanf("%f", &numeros[i]);
        }
    }
    
    switch (*escolha){
    case 1:
        soma(*quant_numeros, numeros);
        linha();
        break;

    case 2:
        subtracao(*quant_numeros, numeros);
        linha();
        break;

    case 3:
        divi(*quant_numeros, numeros);
        linha();
        break;

    case 4:
        multi(*quant_numeros, numeros);
        linha();
        break;

    case 5:
        printf("Ate mais!\n");
        linha();
        break;
    
    default:
        break;
    }
    } while (*escolha != 5);
}

void soma(int quant_numeros, float numeros[]){
    float soma = 0;
    for (int i = 0; i < quant_numeros; i++){
        soma += numeros[i];
    }
    printf("A soma dos numeros eh: %.2f\n", soma);
}

void subtracao(int quant_numeros, float numeros[]){
    float subtracao = numeros[0];
    for (int i = 1; i < quant_numeros; i++){
        subtracao -= numeros[i];
    }
    printf("A subtracao dos numeros eh: %.2f\n", subtracao);
}

void divi(int quant_numeros, float numeros[]){
    float divisao = numeros[0];
    for (int i = 1; i < quant_numeros; i++){
        if (numeros[i] == 0){
            printf("Impossivel dividir por 0!\n");
            return;
        }
        
        divisao /= numeros[i];
    }
    printf("A divisao total dos numeros eh: %.2f\n", divisao);
}

void multi(int quant_numeros, float numeros[]){
    float multiplicacao = numeros[0];
    for (int i = 1; i < quant_numeros; i++){
        multiplicacao *= numeros[i];
    }
    printf("A multiplicacao total dos numeros eh: %.2f\n", multiplicacao);
}

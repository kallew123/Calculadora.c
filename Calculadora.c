#include <stdio.h>

int main(void)
{

    int x;
    int y;
    int escolha;

    printf("------Seja bem vindo a Calculadora de Dois Numeros------\n");

    printf("\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("\n");

    printf("Agora escolha a operacao que deseja: \n");
    printf("1 - Somar | 2 - Subtrair | 3 - Dividir | 4 - Multiplicar\n");
    scanf("%d", &escolha);

    printf("-------------------------------------------------------\n");

    if (escolha == 1)
    {
        int somar = x + y;
        printf("A soma dos numeros eh: %d", somar);
    }else if (escolha == 2)
    {
        int sub = x - y;
        printf("A Subtracao dos numeros eh: %d", sub);
    }else if (escolha == 3)
    {
        if (y == 0)
        {
            printf("impossivel fazer a divisao pois o segundo numero eh igual a ZERO");
        }else{
            int div = x / y;
            printf("A Divisao dos numeros eh: %d", div);
        }
    }else if (escolha == 4)
    {
        int multi = x * y;
        printf("A multiplicacao dos numeros eh: %d", multi); 
    }else{
        printf("O numero selecionado nao faz parte das operacoes!");
    }
        
    printf("Pressione Enter para sair...");
    getchar();
    getchar();
    return 0;

}

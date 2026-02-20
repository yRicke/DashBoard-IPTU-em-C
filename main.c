#include <stdio.h>

int main() {
    int numero, meses;
    int quantidade = 0;
    char continuar;

    float valor_iptu;
    float multa;
    float juros;
    float total;

    float soma_iptu = 0;
    float soma_multa = 0;
    float soma_juros = 0;
    float soma_total = 0;

    do {
        printf("Numero do imovel: ");
        scanf("%d", &numero);

        printf("Valor do IPTU: ");
        scanf("%f", &valor_iptu);

        printf("Meses em atraso: ");
        scanf("%d", &meses);

        multa = valor_iptu * 0.02;
        juros = valor_iptu * 0.015 * meses;
        total = valor_iptu + multa + juros;

        soma_iptu += valor_iptu;
        soma_multa += multa;
        soma_juros += juros;
        soma_total += total;

        quantidade++;

        printf("Deseja inserir outro imovel? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nQuantidade de imoveis: %d\n", quantidade);
    printf("Somatorio IPTU original: %.2f\n", soma_iptu);
    printf("Somatorio multas: %.2f\n", soma_multa);
    printf("Somatorio juros: %.2f\n", soma_juros);
    printf("Somatorio total com acrescimos: %.2f\n", soma_total);

    return 0;
}
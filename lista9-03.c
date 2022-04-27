#include <stdio.h>

#define MAX 10

int main() 
{

    int i, n;
    float prod, x[MAX], y[MAX];

        printf("Digite o tamanho dos vetores: \n");
        scanf("%d", &n);
        printf("\nDigite os componentes do vetor x: \n");

        for (i = 0; i < n; i++)
        scanf("%f", &x[i]);
        printf("\nDigite os componentes do vetor y: \n");

        for (i = 0; i < n; i++)
        scanf("%f", &y[i]);

            prod = 0;

        for (i = 0; i < n; i++)
            prod = prod + x[i] * y[i];
        printf("\nProduto escalar desses vetores: %.2f\n", prod);

    return 0;
}
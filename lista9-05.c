#include <stdio.h>

#define tam 10

int main()
{
    int vet[tam],i,po=0,maior;

        for(i=0;i<tam;i++){

        printf("Entre com os valores do vetor: ");
        scanf("%d",&vet[i]);
        }
            maior = vet[0];

        for(i=0; i<tam; i++){

            if (vet[i] > maior){

                maior = vet[i]; 
                po=i;                 
            } 
        }
        
        printf("O maior elemento do vetor eh: %d e sua posicao atual eh: %d ",maior,po);            

    return 0;
}
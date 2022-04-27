#include <stdio.h>
#define LIM 500
 
int main()
{
    int n,i,j,tmp;
    int vet[LIM];
 
        /*Leitura dos dados do vetor:*/
        printf("Entre com o tamanho do vetor >> ");
        scanf("%d", &n);
        printf("Entre com %d elementos:\n",n);
        for(i = 0; i < n; i++)
        scanf("%d", &vet[i]);
 
        /*Invertendo os dados no vetor:*/ 
        j = n-1;
        for(i = 0; i < n/2; i++){

            tmp = vet[i];
            vet[i] = vet[j];
            vet[j] = tmp;
            j--;
        }
 
        /*Imprimindo o vetor invertido:*/ 
        for(i = 0; i < n; i++)
        printf("%d ",vet[i]);
        printf("\n");
        
    return 0;
}
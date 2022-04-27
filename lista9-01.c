#include <stdio.h>

int main()
{

    int i, vetorA[5],vetorB[5];

        for(i=0; i<5; i++){
          printf("\n digite  um numero[%d]",i);
          scanf(" %d", &vetorA[i]);
        }

       for(i=0; i<5; i++){
         vetorB[i]=vetorA[i]*2;
         printf("\n resultdo= %d >> %d \n",i,vetorB[i]);

        }
    
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float num, soma=0, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / n;

    printf("A media dos numeros digitados sao: %.2f\n", media);

    return 0;
}

#include <stdio.h>
#define tamanho 5

int main() {

    int numero [tamanho];
    pintf("Digite %d numero inteiros \n",tamanho);
    for (int i = 0; i<tamanho; i++){
        printf("Numero %d", i+1);
        scanf("%d", &numero[i]);
    }

    printf("\n Os numeros na ordem inversa são: \n");
    for(int i = tamanho -1; i>=0; i--){
        printf("%d\n, numero[i]");
    }
    return 0;
}
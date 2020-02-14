#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade, result;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    result = idade-1;

    printf("Resultado: %i\n", result);
    
     result += 1;

    printf("idade original: %i\n", result);

    return 0;
}

#include <stdio.h>
#include <stdint.h> // para utilizar variáveis de tamanho exato em bytes...
#include <inttypes.h> // permite ler e mostrar esses tipos que armazenam tamanhos exatos

uint8_t dado, dado2;

int main(){

    uint8_t* enderec_dado = &dado;
    uint8_t* endec2 = &dado2;

printf("Insira:");
scanf("%" SCNu8, &dado);// Faz input do dado de tamanho exato.

printf("Insira:");
scanf("%" SCNu8, &dado2);

    printf("Tamanho: %zu" , sizeof(dado)); //Retorna o tamanho em bytes.
    printf("\nValor: %" PRId8, dado);
    printf("\nSoma: %" PRId8, dado + dado);
    printf("\nEndereco: %p", enderec_dado);

    printf("\nTamanho: %zu" , sizeof(dado2));
    printf("\nValor: %" PRId8, dado2);
    printf("\nSoma: %" PRId8, dado2 + dado2);
    printf("\nEndereco: %p", endec2);

    printf("\nSoma por edereco: %" PRId8, *enderec_dado + *endec2);

return 0;
}

/*IMPORTANTE: No C, o mostrador "%zu" é usado para mostrar o tamanho do dado em bytes
e o "%p" é mostrador usado para endereços de memória. Já o "%" SCNu8 pode ser usado para
imprimir para escanear(fazer input) de dados tamanho exato, enquanto o "%" PRId8 pode 
ser usado pra imprimir dados de tamanho exato.*/
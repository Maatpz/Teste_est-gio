#include <stdio.h>

//  1. Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
// Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
// Imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA?

// int main() {
    // int INDICE = 13, SOMA = 0, K = 0;

    // while (K < INDICE) {
    //     K = K + 1;
    //     SOMA = SOMA + K;
    // }

    // printf("Valor de SOMA: %d\n", SOMA);
    // return 0;


//  2. Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores 
//  anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, 
//  informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número 
//  informado pertence ou não a sequência.

//     int pertenceFibonacci(int numero) {
//         int l = 0, m = 1, prox = 0;

//         if (numero == 0 || numero == 1) {
//             return 1;
//         }

//     while (prox < numero) {
//         prox = l + m;
//         l = m;
//         m = prox;

//         if (prox == numero) {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main() {
//     int numero;

//     printf("Digite um número: ");
//     scanf("%d", &numero);

//     if (pertenceFibonacci(numero)) {
//         printf("O número %d pertence à sequência.\n", numero);
//     } else {
//         printf("O número %d não pertence à sequência.\n", numero);
//     }

//     return 0;
// }



// 3.

// int main() {
   
//     float faturamento[] = {110.0, 215.0, 153.0, 300.0, 250.5, 400.3, 350.0};
//     int n = sizeof(faturamento) / sizeof(faturamento[0]);
    
//     float menor = faturamento[0];
//     float maior = faturamento[0];
//     float soma = 0.0;
    
//     for (int i = 0; i < n; i++) {
//         if (faturamento[i] < menor) {
//             menor = faturamento[i];
//         }
//         if (faturamento[i] > maior) {
//             maior = faturamento[i];
//         }
//         soma += faturamento[i];
//     }
    
//     float media = soma / n;
//     int dias_acima_media = 0;
    
//     for (int i = 0; i < n; i++) {
//         if (faturamento[i] > media) {
//             dias_acima_media++;
//         }
//     }
    
//     printf("Menor faturamento: %.2f\n", menor);
//     printf("Maior faturamento: %.2f\n", maior);
//     printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);
    
//     return 0;
// }



// 4.

// int main() {
   
//     float sp = 67836.43;
//     float rj = 36678.66;
//     float mg = 29229.88;
//     float es = 27165.48;
//     float outros = 19849.53;

//     float total = sp + rj + mg + es + outros;

//     float perc_sp =(sp/total) * 100;
//     float perc_rj =(rj/total) * 100;
//     float perc_mg =(mg/total) * 100;
//     float perc_es =(es/total) * 100;
//     float perc_outros=(outros/total) * 100;

//     printf("SP: %.2f\n",perc_sp);
//     printf("RJ: %.2f\n",perc_rj);
//     printf("MG: %.2f\n",perc_mg);
//     printf("ES: %.2f\n",perc_es);
//     printf("Outros: %.2f\n",perc_outros);

//     return 0;
// }




// 5.
int main() {
    char str[] = "Teste para o estagio de programação";
    int n = 0;

    while (str[n] != '\0') {
        n++;
    }

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}

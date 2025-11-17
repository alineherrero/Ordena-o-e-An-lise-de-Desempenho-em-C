#include <stdio.h>
#include <time.h>


int main() {
    int arr[] = {0, 3, 2, 10, 9};
    int i, j, aux;
    int n = sizeof(arr) / sizeof(arr[0]);
    int trocas= 0;
    int comp= 0;
    clock_t t0, t1; // variaveis do tempo
    double tempo;

    printf("Array original:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        t0 = clock(); //captura tempo inicial
    }
    // usa dois laços for
    for (j=0; j < n - 1; j++){ //contador vai de 1 ate p penultimo item já colocado na posição correta
        for(i=0; i < n - j - 1; i++){ // começa em 0 ate o penultimo Array
            comp++;
            if(arr[i] > arr[i + 1]) { //se vetor de numeros na posiçao i, que começa em 0, tiver valor maior que o vetor de numeros na posiçao seguinte(i+j), algoritmo troca
                aux = arr[i]; //recebe numeros que estão em i
                arr[i]= arr [i + 1]; //recebe da posição seguinte (i=j)
                arr[i + 1]= aux; //recebe o que esta no aux, vai da posição anterior p proxima
                trocas++; 
            }
        }
    }
    t1 = clock(); // captura tempo final
    
    printf("\nArray ordenado:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nTotal de comparações: %d\n", comp);
    printf("Total de trocas: %d\n", trocas);
    tempo = 1000.0 * (t1 - t0) / CLOCKS_PER_SEC; // calcula e imprime o tempo
    printf("Tempo de execução: %.2f ms\n", tempo);
    
    return 0;
}
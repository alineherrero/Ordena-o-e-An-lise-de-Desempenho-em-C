# Algoritmos de Ordenação em C

## 📌 Link do Repositório


---

## 📌 Descrição do Problema
Este projeto implementa três algoritmos clássicos de ordenação em C para comparar número de **comparações**, **trocas** e **tempo de execução**.  
O objetivo é analisar a eficiência e escalabilidade de cada método em diferentes tamanhos de entrada.

### 🔹 Métodos escolhidos
- **Bubble Sort**  
  Escolhido por ser simples e didático, mas ineficiente em grandes entradas.  
- **Insertion Sort**  
  Escolhido por ter bom desempenho em listas pequenas ou quase ordenadas.  
- **Quick Sort (Lomuto, pivô final)**  
  Escolhido por ser rápido na média (\(O(n \log n)\)) e usado em bibliotecas reais.

---

## 📌 Como compilar e rodar

### Compilação
```bash
gcc -O1 -std=c11 src/*.c -o ordena

Execução
bash
./ordena
O programa solicita:
O tamanho do vetor (n).
Os n números a serem ordenados.

📌 Política de Contagem de Passos
Comparações
Bubble Sort: cada teste arr[i] > arr[i+1].
Insertion Sort: cada comparação lista[j] > aux, incluindo a que falha.
Quick Sort: cada teste v[j] <= pivot na partição.

Trocas
Bubble Sort: cada swap entre dois elementos.
Insertion Sort: cada deslocamento lista[j+1] = lista[j].
Quick Sort: cada swap, incluindo a troca final do pivô (se ocorrer).

Resultados (média de 5 execuções)
Entrada usada

Código
Array original:
4 5 5 3 9 3 9 1

Saída
Código
Bubble Sort -> 1 3 3 4 5 5 9 9 
Comparações: 28, Trocas: 14, Tempo: 0.00 ms

Insertion Sort -> 1 3 3 4 5 5 9 9 
Comparações: 19, Trocas: 14, Tempo: 0.00 ms

Quick Sort -> 1 3 3 4 5 5 9 9 
Comparações: 18, Trocas: 10, Tempo: 0.00 ms

| Método         | N | Comparações | Trocas | Tempo (ms) |
|----------------|---|-------------|--------|------------|
| Bubble Sort    | 8 | 28          | 14     | 0.00       |
| Insertion Sort | 8 | 19          | 14     | 0.00       |
| Quick Sort     | 8 | 18          | 10     | 0.00       |

Discussão Crítica
Computabilidade × Escalabilidade

Computabilidade × Escalabilidade

Bubble Sort: não escalável, útil apenas para ensino.
Insertion Sort: 𝑂(𝑛2) no pior caso, mas 𝑂(𝑛) em listas quase ordenadas.
Quick Sort: 𝑂 (𝑛log⁡𝑛) na média, escalável e eficiente.

Conclusão
Quick Sort é o melhor método para grandes entradas.
Insertion Sort é competitivo em listas pequenas ou quase ordenadas.
Bubble Sort serve como baseline didático, mas não é eficiente.

#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2] = {0};  // Matriz resultante
    
    // Multiplicación de matrices usando punteros
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                *(ptrC+i*2+j) +=  *(ptrA+i*2+K)  * *(ptrB+K);
            }
        }
    }
    
    // Mostrar matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // TODO: Imprime los elementos de la matriz resultante, usando apuantadores
        }
        
    }
    
    return 0;
}

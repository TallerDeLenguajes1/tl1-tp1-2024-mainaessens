#include <stdio.h>
int main(){
    printf("Hola mundo"); 
    int a = 4; 
    int b = 3;
    int *punt; 
    punt = &a; 

    printf("El contenido del puntero es: %d\n", *punt); 
    printf("La dirección de memoria almacenada por el puntero: %d\n", punt); 
    printf("La dirección de memoria de la varible: %d\n", &a); 
    printf("La dirección de memoria del puntero: %d\n", &punt); 
    printf("El tamaño de memoria utilizado por la variable es: %zu bytes", sizeof(int)); 
    return 0; 
}
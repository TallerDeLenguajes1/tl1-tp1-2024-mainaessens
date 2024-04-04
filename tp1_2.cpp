#include <stdio.h>

int cuadrado (int n); 
void cuadrado_void (int n, int *cuadrado); 
void invertir (int *a, int *b); 
void ordenar (int *a, int *b); 


int main(){
    int n, resultado, a, b, cua, c, d; 
    printf("Ingrese un numero: \n"); 
    scanf("%d",&n); 

    printf("La dirección de variable es: %d\n", &n); 
    printf("El contenido de la variable es: %d\n", n); 

    resultado = cuadrado(n);
    printf("El cuadrado del numero ingresado es: %d con la funcion que si tiene retorno\n", resultado);

    cuadrado_void(n, &cua); 
    printf("El cuadrado del numero ingresado con la funcion que no tiene retorno es: %d \n", cua); 

    printf("INGRESE LOS VALORES DE A Y B ENTEROS\n"); 
    scanf("%d", &a);
    scanf("%d", &b);
    printf("El valor de las variables antes de invertir son: a = %d y b = %d\n", a, b);
    invertir(&a,&b); 
    printf("El valor de las variables despues de invertir son: a = %d y b = %d\n", a, b);  

    printf("INGRESE LOS VALORES DE C Y D ENTEROS\n"); 
    scanf("%d", &c);
    scanf("%d", &d);
    printf("El valor de las variables antes de ordenar son: c = %d y d = %d\n", c, d);
    ordenar(&c,&d); 
    printf("El valor de las variables despues de ordenar son: c = %d (el menor) y d = %d (el mayor)", c, d); 

     

    getchar(); 
    return 0; 
}

int cuadrado (int n){
    int r; 
    r = n*n; 
    return r;
}

void cuadrado_void (int n, int *cuadrado){
    *cuadrado = n*n; 
}

void invertir(int *a, int *b){
    int aux; 
    aux = *a; 
    *a = *b; 
    *b = aux; 
}

void ordenar(int *a, int *b){
    int aux; 
    if ((*a) > (*b)){ // a=8 b=6
        aux = *a; //aux = 8
        *a = *b; // a = 6
        *b = aux; // b = 8
    }
}
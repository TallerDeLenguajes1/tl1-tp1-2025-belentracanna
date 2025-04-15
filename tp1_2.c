#include<stdio.h>
#include<stdlib.h>

  // declaracion de la funcion
int cuadrado(int num);
//a) Función que devuelve el cuadrado de un número

void cuadrado_void(int num); // b) Función que devuelve el cuadrado de un número (tipo void)
 
void mostrar_direccion_contenido(int variable); // c) Función que muestra la dirección y el contenido de una variable 
  
// d) Función para invertir los valores de dos variables (paso por referencia)
void invertir(int *a, int *b) ;
 

// e) Función para ordenar dos variables (paso por referencia)
void orden(int *a, int *b) ;
 

int main() {
  int num, resultado;
  int val1, val2;

  printf("--- Prueba de la funcion cuadrado (con retorno) ---\n");
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  resultado = cuadrado(num);
  printf("El cuadrado de %d es: %d\n\n", num, resultado);

  printf("--- Prueba de la funcion cuadrado_void (sin retorno) ---\n");
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  cuadrado_void(num);
  printf("\n");

  printf("--- Prueba de la funcion mostrar_direccion_contenido ---\n");
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  mostrar_direccion_contenido(num);
  printf("\n");

  printf("--- Prueba de la funcion invertir ---\n");
  printf("Ingrese el primer valor: ");
  scanf("%d", &val1);
  printf("Ingrese el segundo valor: ");
  scanf("%d", &val2);
  printf("Valores antes de invertir: val1 = %d, val2 = %d\n", val1, val2);
  invertir(&val1, &val2);
  printf("Valores despues de invertir: val1 = %d, val2 = %d\n\n", val1, val2);

  printf("--- Prueba de la funcion orden ---\n");
  printf("Ingrese el primer valor: ");
  scanf("%d", &val1);

  printf("Ingrese el segundo valor: ");
  scanf("%d", &val2);

  printf("Valores antes de ordenar: val1 = %d, val2 = %d\n", val1, val2);

  orden(&val1, &val2);
  printf("Valores despues de ordenar: val1 = %d (menor), val2 = %d (mayor)\n\n", val1, val2);

  printf("--- Utilizacion de las funciones con pares de valores ---\n");
  int par1_a, par1_b, par2_a, par2_b;

  printf("Ingrese el primer par de valores (separados por espacio): ");
  scanf("%d %d", &par1_a, &par1_b);

  printf("--- Par 1 ---\n");
  printf("Cuadrado de %d: %d\n", par1_a, cuadrado(par1_a));
  cuadrado_void(par1_b);
  mostrar_direccion_contenido(par1_a);
  printf("Antes de invertir: par1_a = %d, par1_b = %d\n", par1_a, par1_b);
  invertir(&par1_a, &par1_b);
  printf("Despues de invertir: par1_a = %d, par1_b = %d\n", par1_a, par1_b);
  orden(&par1_a, &par1_b);
  printf("Ordenados: menor = %d, mayor = %d\n\n", par1_a, par1_b);

  printf("Ingrese el segundo par de valores (separados por espacio): ");
  scanf("%d %d", &par2_a, &par2_b);

  printf("--- Par 2 ---\n");
  printf("Cuadrado de %d: %d\n", par2_a, cuadrado(par2_a));
  cuadrado_void(par2_b);
  mostrar_direccion_contenido(par2_a);
  printf("Antes de invertir: par2_a = %d, par2_b = %d\n", par2_a, par2_b);
  invertir(&par2_a, &par2_b);
  printf("Despues de invertir: par2_a = %d, par2_b = %d\n", par2_a, par2_b);
  orden(&par2_a, &par2_b);
  printf("Ordenados: menor = %d, mayor = %d\n", par2_a, par2_b);

  return 0;


}

// a) Función que devuelve el cuadrado de un número
int cuadrado(int num) {
  return num * num;
}
// b) Función que devuelve el cuadrado de un número (tipo void)
void cuadrado_void(int num) {

  printf("El cuadrado de %d es: %d\n", num, num * num);
}

// c) Función que muestra la dirección y el contenido de una variable
void mostrar_direccion_contenido(int variable) {
  printf("Direccion de la variable: %p\n", &variable);
  printf("Contenido de la variable: %d\n", variable);
}

// d) Función para invertir los valores de dos variables (paso por referencia)
void invertir(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


// e) Función para ordenar dos variables (paso por referencia)
void orden(int *a, int *b) {
  if (*a > *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
}

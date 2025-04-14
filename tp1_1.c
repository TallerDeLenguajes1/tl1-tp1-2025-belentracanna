#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("Hola Mundo\n\n");
  
/*e) Declare un puntero en el procedimiento principal que apunte a una 
variable de algún tipo y muestre por pantalla lo siguiente: 
1) El contenido del puntero 
2) La dirección de memoria almacenada por el puntero.  
3) la dirección de memoria de la variable. 
4) la dirección  de memoria del puntero. 
5) el tamaño de memoria utilizado por esa variable usando la 
función sizeof() 
f) Hacer el segundo commit del archivo y subirlo a la plataforma 
g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará 
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el 
punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo 
readme.md */




    int variable1 = 1;
   
    int * pVariable1;

    variable1 = 2;
    pVariable1 = &variable1;
    int miEntero = 10;

    printf("Contenido de la variable1: %d \n\n", variable1);
    // & <- nos permite ver la dirección de memória en la que está la variable
    printf("la direccion de memoria del puntero: %p \n\n", &variable1);

    printf("Contenido del puntero pVariable1: %p \n\n", pVariable1);
    // & <- nos permite ver la dirección de memória en la que está la variable    
    printf("Contenido de lo apuntado por pVariable1: %d \n\n", *pVariable1);
   
  printf("El tamanio de la variable miEntero (int) es: %zu bytes\n\n", sizeof(miEntero));
  getchar();
return 0;

}
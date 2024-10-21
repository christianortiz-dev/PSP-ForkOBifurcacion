#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() {
 int valor1 = 3; // Definimos la variable entera con el valor inicial de 6
 int valor2 = 7; // Definimos la variable entera con el valor inicial de 6
 pid_t pid = fork(); // Creamos el proceso hijo
 if (pid < 0) {
 // Si fork() devuelve un valor negativo, hubo un error
 perror("Error al crear el proceso hijo");
 return 1;
 } else if (pid == 0) {
 // Esto se ejecuta en el proceso hijo
 int nuevoValor = valor1 * valor1;
 printf("Proceso hijo: El valor es %d\n", nuevoValor);
 } else {
 // Esto se ejecuta en el proceso padre
 int nuevoValor = valor2 * valor2;
 printf("Proceso padre: El valor es %d\n", nuevoValor);
 }
 return 0;
} 
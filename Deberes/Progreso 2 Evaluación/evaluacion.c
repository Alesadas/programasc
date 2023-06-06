#include <stdio.h>

// Declaración de funciones
float calcularPromedioAlumno(float calificaciones[]);
float calcularPromedioGrupo(float calificaciones[][3]);
int obtenerMejorAlumno(float calificaciones[][3]);

int main() {
    int i, j;
    float calificaciones[23][3]; // Matriz para almacenar las calificaciones de cada alumno

    // Ingresar las calificaciones de cada alumno
    for (i = 0; i < 23; i++) {
        printf("Ingrese las calificaciones del alumno %d:\n", i+1);
        for (j = 0; j < 3; j++) {
            printf("Progreso %d: ", j+1);
            scanf("%f", &calificaciones[i][j]);
        }
    }

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
    // Calcular y mostrar el promedio de cada alumno
    printf("\nPromedio de calificaciones de cada alumno:\n");
    for (i = 0; i < 23; i++) {
        float promedio = calcularPromedioAlumno(calificaciones[i]);
        printf("Alumno %d: %.2f\n", i+1, promedio);
    }

    // Calcular y mostrar la nota promedio del grupo para cada progreso
    printf("\nNota promedio del grupo para cada progreso:\n");
    for (j = 0; j < 3; j++) {
        float promedio = calcularPromedioGrupo(calificaciones);
        printf("Progreso %d: %.2f\n", j+1, promedio);
    }

    // Encontrar y mostrar el alumno con el mayor promedio
    int mejorAlumno = obtenerMejorAlumno(calificaciones);
    printf("\nAlumno con el mayor promedio: Alumno %d\n", mejorAlumno+1);

    return 0;
}


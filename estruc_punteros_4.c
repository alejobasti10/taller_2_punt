#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*hacer 2 estruc una llamada promedio que tendra los sigtes campos
nota1,nota2,nota3 y otro llamado alumno que tendra los sigtes 
miembros nombre -sexo-edad hacer que la estruc promedio este anidad
en la estruc alumno luego pedir todos los datos para un alumnos
luego calcular su promedio y por ultimo imprimir todos los datos incluidos 
el promedio*/
struct Prom{
	float nota1;
	float nota2;
	float nota3;
};
struct Estudiante{
	struct Prom promedio;
	char nombre[20];
	int edad;
	char sexo[10];
	float totalPromedio;
}alumno,*palum=&alumno;

int main() {
	printf("Ingrese datos de los estudiantes:\n");
	printf("Nombre: ");
	fflush stdin;
	gets((palum)->nombre);
	printf("\nEdad: ");
	scanf("%d",&(palum)->edad);
	printf("\nSexo: ");
	fflush stdin;
	gets((palum)->sexo);
	printf("\nNota 1: ");
	scanf("%f",&(palum)->promedio.nota1);
	printf("\nNota 2: ");
	scanf("%f",&(palum)->promedio.nota2);
	printf("\nNota 3: ");
	scanf("%f",&(palum)->promedio.nota3);
	(palum)->totalPromedio=((palum)->promedio.nota1+(palum)->promedio.nota2+(palum)->promedio.nota3)/3;
	
	printf(">>>>>>>Mostrando Datos<<<<<<<< \n");
	printf("Nombre: %s",(palum)->nombre);
	printf("\nEdad: %d",(palum)->edad);
	printf("\nSexo: %s",(palum)->sexo);
	printf("\nPromedio: %.1f\n",(palum)->totalPromedio);	
	return 0;
}


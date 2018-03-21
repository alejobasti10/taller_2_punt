#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*estructura llamada competidor en la cual se tendran los sgtes 
campo_ nombre-edad-sexo-club-pedir datos al usuario para un 
competidor y asignarle una categoria de competicion
infantil <=15años
joven   <= 30 años
mayor > 30 años
posteriormente imprimir todos los datos del competidor incluidad 
su categoria de competicion
*/

struct Competidor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[30];
	char categoria[30];
}competidorsito[100],*pcom=competidorsito;

int main() {
	int tam;
	printf("Ingrese cantidad de Competidores: ");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores\n");
	for(int i=0;i<tam;i++){
		fflush stdin;
		printf(">>Competidor: %i\n",i+1);
		printf("Nombre: ");
		gets((pcom+i)->nombre);
		printf("\nEdad: ");
		scanf("%d",&(pcom+i)->edad);
		fflush stdin;
		printf("\nSexo: ");
		gets((pcom+i)->sexo);
		fflush stdin;
		printf("\nClub: ");
		gets((pcom+i)->club);
		if((pcom+i)->edad <= 15){
			strcpy((pcom+i)->categoria,"Infantil");
		}
		if((pcom+i)->edad <= 30){
			strcpy((pcom+i)->categoria,"Joven");
		}
		if((pcom+i)->edad > 30){
			strcpy((pcom+i)->categoria,"Mayor");
		}
		printf("\n");
	}
	
	printf("Mostrando Datos de los Competidores:\n");
	for(int j=0;j<tam;j++){
		printf(">>>Competidor %i\n",j+1);
		printf("Nombre: %s\n",(pcom+j)->nombre);
		printf("Edad: %d\n",(pcom+j)->edad);
		printf("Sexo: %s\n",(pcom+j)->sexo);
		printf("Club: %s\n",(pcom+j)->club);
		printf("Categoria: %s\n",(pcom+j)->categoria);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*Pedir su nombre al usuario y devolver el numero de vocales que hay
elaboro:Alejandro Gonzalez*/
int main() {
	char vec[20];
	char *nombre=vec;
	int cont=0;
	printf("Por favor Ingrese su Nombre\n\n");
	gets(nombre);
	
	for(int i=0;i<20;i++){		
		switch(nombre[i]){
		case 'a':
			cont++;
			break;
		case 'e':
			cont++;
			break;
		case 'i':
			cont++;
			break;
		case 'o':
			cont++;
			break;
		case 'u':
			cont++;	
			break;
		}
	}
	printf("\n");
	printf("El numero de vocales que tiene su nombre es :%d",cont);
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
/*Pedir una cadena de caracteres string al usuario, e indicar cuantas
veces aparece la vocal a,e,i,o,u, en la cadena de caracteres
elaboro: Alejandro gonzalez*/

int main() {
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	char vec[50];
	char *nombre=vec;
	printf("Por favor ingrese su frase le diremos cuantas vocales tiene \n");
	gets(nombre);
	for(int i=0;i<50;i++){
		    switch(nombre[i]){				
			case 'a': contA++; break;			
			case 'e': contE++; break;			
			case 'i': contI++; break;
			case 'o': contO++; break;
			case 'u': contU++; break;
		}
	}
	printf("El numero de a es -> %d\n",contA);
	printf("El numero de a es -> %d\n",contE);
	printf("El numero de a es -> %d\n",contI);
	printf("El numero de a es -> %d\n",contO);
	printf("El numero de a es -> %d\n",contU);
	return 0;
}


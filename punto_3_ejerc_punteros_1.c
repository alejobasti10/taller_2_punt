#include <stdio.h>
#include <stdlib.h>



/*Comprobar si un numero es par o impar, y señalar la posicion de memoria
donde se esta guardando el numero. Con punteros
elaboro: alejandro gonzalez
*/

int main() {
	int *num;
	printf("por favor ingrese un numero \n\n"),
		scanf("%d",&*num);
	if(*num%2==0){
		
		printf("el numero es par || Direccion de memoria es--> %d",&num);
		
	}else{
		
		printf("el numero es Impar || Direccion de memoria es--> %d",&num);
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
/*Determinar si un numero es primo o no, con punteros y ademas indicar
en que posicion de memoria se guardo el numero
alejandro: alejandro gonzalez
*/

int main() {
	int num;
	int *pt=&num;
	int cont=0;
	printf("por favor ingrese un numero \n\n");
	scanf("%d",&*pt);
	for (int i=1;i<=*pt;i++){
		if(*pt%i==0){
			cont++;
		}
	}
	if(cont==2){
		printf(" \n  El numero es primo || La direc de memoria es --%p\n",&pt);
	}else{
		printf("\n  El numero NO es primo || La direc de memeoria es-- %p\n",&pt);
	}
	return 0;
}


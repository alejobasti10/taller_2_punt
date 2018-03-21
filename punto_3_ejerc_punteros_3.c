#include <stdio.h>
#include <stdlib.h>
/*rellenar un array de 10 numeros , posteriormente utilizando punteros
indicar cuales son numeros pares y  su posicion en memoria
elaboro: alejandro gonzalez */

int main() {
	int vec[10];
	int *ptVec=vec;
	printf("Ingrese 10 numeros \n");
	for(int i=0;i<10;i++){
		scanf("%d",&*(ptVec+i));
		if(*(ptVec+i)%2==0){
			printf("\n El numero es par || direcc de memoria es --%d\n",&ptVec);
			
		}else{
			printf("\n El numero es Impar || direcc de memoria es --%d\n",&ptVec);
		}
	}
	
	
	return 0;
}


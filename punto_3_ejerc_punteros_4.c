#include <stdio.h>
/*Rellenar un arreglo con N numeros, posteriormente utilizando punteros
determinar el menor elemento del vector
elaboro: alejandro gonzalez*/

int main() {
	int vec[100];
	int *ptVec=vec;
	int num;
	int aux=0;
	printf("Ingrese el numero de elementos \n\n");
	scanf("%d",&num);
	printf("\n");
	printf("Ingrese los elementos del vector \n\n");
	for(int i=0;i<num;i++){
		scanf("%d",&*(ptVec+i));	
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if (*(ptVec+j)>*(ptVec+j+1)){
				aux=*(ptVec+j);
				*(ptVec+j)=*(ptVec+j+1);
				*(ptVec+j+1)=aux;
			}
		}
	}printf("\n");
	for(int i=0;i<num;i++){
		printf("%d\n",*(ptVec+i));
	}printf("\n");
	printf("El numero menor es : %d\n",*(ptVec));
	return 0;
}


#include <stdio.h>
/*crear una matriz de 3x3 donde el usuario completa sus valores desde
el teclado y al final imprimir la matriz y la suma de cada una de sus posiciones
elaboro: alejandro gonzalez*/

int main() {
	int matriz[3][3];
	int *pt=&matriz[0][0];
	int sumatoria[3][3];
	int *psuma=&sumatoria[0][0];
	printf("por favor ingrese los elementos de la matriz\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&*(pt+i+j *3));
		}
	}printf("\n");f
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			*(psuma+i+j *3)=*(pt+i+j *3)+*(pt+i+j *3);
			printf("%d ",*(psuma+i+j *3));
		}printf("\n");
	}
	
	return 0;
}


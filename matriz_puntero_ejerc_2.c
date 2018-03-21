#include <stdio.h>
#include <stdlib.h>
/*crear una matriz de 3x3 y llenarla de manera automatica por el sistema
elaboro: alejandro gonzalez*/

int main() {
	int matriz [3][3];
	int *pt=&matriz[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			*(pt+i+j *3)= rand() %100;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",*(pt+i+j *3));
		}printf("\n");
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
/*crear una matriz de 3x3 y llenarla de manera automatica por el sistema
con numeros primos
elaboro: alejandro gonzalez
*/

int main() {
	int vec[9];
	int *ptVec=vec;
	int matriz[3][3];
	int *pt=&matriz[0][0];
	for(int i=2;i<=23;i++){
		int cont=0;
		for(int j=1;j<=23;j++){
			if(i%j==0){
				cont++;
			}
			
		}if(cont==2){
			printf("%d ",i);
		}
	}	
		
	return 0;
}


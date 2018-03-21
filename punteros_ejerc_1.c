#include <stdio.h>

/*Declara un array de numeros decimales e introduce en el cuatro elementos 
que sean 32.583,11.239,45.781,22.237. muestre por pantalla todos los elementos

elaboro: alejandro gonzalez
fecha: 25/02/2018
*/

int main() {
	
	
	float vec[4]={32.583,11.239,45.781,22.237};
	float *pt=vec;
	for (int i=0;i<=3;i++){
				
		printf("\n los numeros decimales son %.3f \n ",*(pt+i));
	}
	
	
	return 0;
}


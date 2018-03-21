#include <stdio.h>
/*pedir al usuario que ingrese dos valores, y de acuerdo a los valores ingresados
mostrar en pantalla un arreglo de num1 x num2 que contenga ceros y unos
elaboro: Alejandro Gonzalez
fecha: 25/02/2018*/

int main() {
	
	int num1,num2;
	printf("Por favor ingrese dos valores\n");
	scanf("%d%d",&num1,&num2);	
	int mtz[num1][num2];
	int*pt=&mtz[0][0];
	for(int i=0;i<=num1;i++){
		for(int j=0;j<=num2;j++){
			if (i==j){
				*(pt+i+j *num2)=1;
			}else{
				*(pt+i+j *num2)=0;
			}
		}
	}
	for(int i=0;i<=num1;i++){
		for (int j=0;j<=num1;j++){
			printf("%d",*(pt+i+j *num2));
		}
		printf("\n");
	}
	return 0;
}


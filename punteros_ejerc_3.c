#include <stdio.h>
#include <math.h>
/*Crear un arreglo de dimension 4x4, y pedirle al usuario que ingrese 4 numeros
en la primera columna mostrar los numeros ingresados por el usuario, en la segunda
columna el numero elevado al cuadrado, en la tercera columna el numero elevado
al cubo y en la cuarta columna el numero elevado a la cuarta. imprimir en pantalla
el resultado del arreglo
elaboro:alejandro gonzalez
fecha:26/02/2018*/

int main() {
	int matriz[4][4];
	int *pt=&matriz[0][0];
	int i,j,x,num=3;
	for(i=0;i<=3;i++){
		printf("ingrese un numero");
		scanf("%d",&x);
		for (j=0;j<=3;j++)
			*(pt+i+j *3)=x;
			
	}
	for(i=0;i<=num;i++){
		
		for (j=0;j<=num;j++){
			if (j==1){
				*(pt+i+j *3)=pow(*(pt+i+j *num),2);
			}
			if (j==2){
				
				*(pt+i+j *3)=pow(*(pt+i+j *num),3);
			}
			if (j==3){
				
				*(pt+i+j *3)=pow(*(pt+i+j *num),4);
			}
			printf("%d ",*(pt+i+j *num));	
		}
			
		printf("\n");	
	}
	
	return 0;
}


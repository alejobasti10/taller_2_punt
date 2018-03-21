#include <stdio.h>
#include<stdlib.h>
/*Programa que pide al usuario n numeros y llena un vector los organiza en orden
ascendente y los muestra con punteros*/

int main() {
	int num,aux;
	int *pt;
	printf("Ingrese el numero de elemntos del vector\n\n");
	scanf("%d",&num);
	pt=new int[num];
	printf("\n Ingrese los elementos del vector\n\n");
	for(int i=0;i<num;i++){
		scanf("%d",&pt[i]);
	}	
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(pt[j]>pt[j+1]){
				aux=pt[j];
				pt[j]=pt[j+1];
				pt[j+1]=aux;
			}
		}		
	}
	printf("\n\n Ordenando Vector\n\n");
	for(int i=0;i<num;i++){
		printf("%d\n",*(pt+i));
	}	
	
	delete[] pt;
	return 0;
}


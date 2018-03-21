#include <stdio.h>
#include <stdlib.h>//new and delete functions

/*Realice un programa que calcule la suma de dos matrices dinamicas
elaboro:Alejandro gonzalez*/



int main() {
	int **P_matriz,fila,col;//declarando matriz dinamica
	int **suma;
	int **matriz2;
	printf("\n Programa que suma 2 Matrices Dinamicas \n");
	printf("-------------------------------");	
	
	printf("\n Ingrese el tamaño de la matriz:\n");
	scanf("%d",&fila);
	scanf("%d",&col);
	
	P_matriz=new int *[fila];//Reservando memoria para la fila
	
	for(int i=0;i<fila;i++){
		P_matriz[i]=new int[col];//Reservando memoria para la columna
	}
	
	suma=new int *[fila];//Reservando memoria para la fila
	
	for(int i=0;i<fila;i++){
		suma[i]=new int[col];//Reservando memoria para la columna
	}
	
	matriz2=new int *[fila];//Reservando memoria para la fila
	
	for(int i=0;i<fila;i++){
		matriz2[i]=new int[col];//Reservando memoria para la columna
	}
	printf("Elementos Matriz 1: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			scanf("%d ",&*(*(P_matriz+i)+j));//Llenando matriz Dinamica			
		}
	}
	printf("Elementos Matriz 2: \n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			scanf("%d ",&*(*(matriz2+i)+j));//Llenando matriz Dinamica			
		}
	}
	
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			*(*(suma+i)+j)=*(*(P_matriz+i)+j)+*(*(matriz2+i)+j);//Llenando matriz Dinamica			
		}
	}
	printf("\nImprimiendo Matriz 1\n");
	printf("\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){			
			printf("%d ",*(*(P_matriz+i)+j));			
		}printf("\n");
	}
	
	printf("\nImprimiendo Matriz 2:\n");	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){			
			printf("%d ",*(*(matriz2+i)+j));			
		}printf("\n");
	}
	
	printf("\nImprimiendo Matriz suma\n");	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){			
			printf("%d ",*(*(suma+i)+j));			
		}printf("\n");
	}
	for(int i=0;i<fila;i++){
		delete[] P_matriz[i];
	}
	delete[] P_matriz;
	
	for(int i=0;i<fila;i++){
		delete[] matriz2[i];
	}
	delete[] matriz2;
	
	for(int i=0;i<fila;i++){
		delete[] suma[i];
	}
	delete[] suma;
	return 0;
}


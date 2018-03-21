#include <stdio.h>
#include <stdlib.h>

/*Hacer una funcion para almacenar N numeros en un arreglo dinamico,
posteriormente en otra funcion buscar un numero en particular
elaboro: Alejandro Gonzalez */
void almacenar();
void buscaNumero();
int *vec;
int tam;
int main() {
	almacenar();
	return 0;
}
void almacenar(){
	printf("Ingrese el tamaño del vector\n");
	scanf("%d",&tam);
	vec=new int[tam];
	printf("Ingrese los elementos del vector\n");
	for(int i=0;i<tam;i++){
		scanf("%d",&vec[i]);
	}
	buscaNumero();
	delete[]vec;
}
void buscaNumero(){
	int inf,sup,dato,mitad;
	char band = 'F';	
	printf ("\nIngrese Elemento a buscar: \n");
	scanf ("%d",&dato);	
	inf = 0;
	sup = tam;	
	while((inf <= sup) && (band == 'F')) {
		mitad =((inf+sup)/2);
		if(vec[mitad]==dato){
			band = 'V';
		}
		else 
		   if(vec[mitad]>dato){
			sup = mitad - 1;
		}
		   else{
			   inf = mitad + 1;
		   }
	}	
	if(band == 'F'){
		printf("\nEl Elemento no esta en el Arreglo.\n");
	} 
	else if(band=='V'){
		printf("\nElemento encontrado, en la pos: %i",mitad+1);
	}
}

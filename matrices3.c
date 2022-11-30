//Programa para calcular la transpuesta de una matriz de hasta 3x3

#include<stdio.h>

int main (){
//Se declaran las variables de la matriz, las columnas y filas màs los indices inicializados en0
	int matriz[3][3], columna, fila, i=0, j=0;
//Se solicitan la cantidad de filas para la matriz y se almacena en fila		
		printf("De cuantas filas es la matriz?\n ");
		scanf("%d", &fila);
//Se solicitan la cantidad de columnas para la matriz y se almacena en columna
		printf("De cuantas columas es la matriz?\n ");
		scanf("%d", &columna);
//Se solicitan los elementos de la matriz y se almacenan
	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("Escribe el valor de  (%d,%d)", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
//Impresión de la Matriz Original
	printf("Matriz Original\n");

	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}	
//Impresión de la Matriz Transpuesta
	printf("Matriz Transpuesta\n");
	
	for(i = 0;i < columna;i++)
	{
		for(j = 0;j < fila;j++)
		{
			printf("%d\t", matriz[j][i]);
		}
		printf("\n");
	}
}

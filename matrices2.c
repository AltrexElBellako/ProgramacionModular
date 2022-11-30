//Programa de multiplicación de matrices de 2x2
#include <stdio.h>
int main () {	
int ii,jj,ccc,matriz1[2][2],matriz2[2][2],resultado=0, result[2][2];

	printf("\nMultiplicacion de matrices de 2x2\n\n");
//Se indica que el Producto Matriz está en ceros
	for(ii=0;ii<2;ii++)
	for(jj=0;jj<2;jj++)
	result[ii][jj]=0;
	for(ii=0;ii<2;ii++)
{
	for(jj=0;jj<2;jj++)
//Se solicitan los elementos de la matriz1 y se almacenan
{
	printf("Introduzca un valor para la matriz 1 posición (%d,%d): ",ii+1,jj+1);
	scanf("%d", &matriz1[ii][jj]);
}
}
	for(ii=0;ii<2;ii++)
{
	for(jj=0;jj<2;jj++)
//Se solicitan los elementos de la matriz2 y se almacenan
{
	printf("Introduzca un valor para la matriz 2 posición (%d,%d): ",ii+1,jj+1);
	scanf("%d", &matriz2[ii][jj]);
}
}	
//Se realiza la multiplicación y el valor del producto se almacena
	for(ii=0;ii<2;ii++)
{
	for(ccc=0;ccc<2;ccc++)
{
	for(jj=0;jj<2;jj++)
{
	resultado=resultado+(matriz1[ii][jj]*matriz2[jj][ccc]);
}
	result[ii][ccc]=resultado;
	resultado=0;
}
}
//Impresión del Producto Matriz
	printf("\nProducto Matriz\n");
	for(ii=0;ii<2;ii++)
{
	for(ccc=0;ccc<2;ccc++)
{
	printf("%d\t",result[ii][ccc]);
}
	printf("\n");
}
}

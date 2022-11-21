//Programa para sumar matrices
#include <stdio.h>
void sumaMatriz(int tamaño, int a[][10],int b[][10],int c[][10])
{
	for (int i=0;i<tamaño;i++)
	{

		for (int j=0;j<tamaño;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d", c[i][j]);
		}
	}
}
void tecleeMatriz(int tamaño, int a[][10],int b[][10])
{
	for (int i=0;i<tamaño;i++)
	{
		for (int j=0;j<tamaño;j++)
		{
			printf("Ingrese el valor de la matriz a posicion[%d],[%d]",i+1,j+1);
			scanf("%i",&a[i][j]);
			printf("Ingrese el valor de la matriz b posicion [%d],[%d]",i+1,j+1);
			scanf("%i",&b[i][j]);
		}
	}
}
int main ()
{
int tamaño, a[10][10], b[10][10], c[10][10];
			printf("Teclee tamaño de la matriz ");
			scanf("%d",&tamaño);
		       	tecleeMatriz(tamaño,a,b);
				sumaMatriz(tamaño,a,b,c);
				return 0;
}

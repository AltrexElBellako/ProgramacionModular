//Programa para sumar matrices
#include <stdio.h>
int main () {
int filasm, columnasm, aa[10][10], b[10][10], cc[10][10],i=0, j=0;;
	
printf("\nSuma de  matrices de 2x2 hasta 10x10\n\n");
//Se solicitan la cantidad de filas para la matriz y se almacena en fila
	printf("\nDe cuantas filas es la matriz? ");
        scanf("%d", &filasm);
//Se solicitan la cantidad de columnas para la matriz y se almacena en columna
        printf("De cuantas columas es la matriz? ");
        scanf("%d", &columnasm);
	printf("\n");
        for(i = 0;i < filasm;i++)
{
        for(j = 0;j < columnasm;j++)
//Se solicitan los elementos de la matriz1 y se almacenan
{
	printf("Introduzca un valor para la matriz 1 posición [%d],[%d]: ",i+1,j+1);
	scanf("%i",&aa[i][j]);
}
}

	for (int i=0;i<filasm;i++)
{
	for (int j=0;j<columnasm;j++)
//Se solicitan los elementos de la matriz2 y se almacenan
{
	printf("Introduzca un valor para la matriz 2 posición [%d],[%d]: ",i+1,j+1);
	scanf("%i",&b[i][j]);
}
}
//Se realiza la suma y el valor del resultado se almacena para luego imprimirse
	printf("\nMatriz Resultado\n");
	for (int i=0;i<filasm;i++)
{
	for (int j=0;j<columnasm;j++)
{{
	cc[i][j]=aa[i][j]+b[i][j];
}
	printf("%d\t", cc [i][j]);
}
	printf("\n");
}
}

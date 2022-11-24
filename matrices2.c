#include <stdio.h>

void main(void)
{
	int matriz1[2][2],matriz2[2][2],resultado=0,result[2][2];
	int i,j,c;
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	result[i][j]=0;
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("\nIntroduzca un valor para la matriz 1[%d][%d]: ",i+1,j+1);
	scanf("%d", &matriz1[i][j]);
}
}
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("\nIntroduzca un valor para la matriz 2[%d][%d]: ",i+1,j+1);
	scanf("%d", &matriz2[i][j]);	
}
}
	for(i=0;i<2;i++){
	for(c=0;c<2;c++){
	for(j=0;j<2;j++){
	resultado=resultado+(matriz1[i][j]*matriz2[j][c]);
}
	result[i][c]=resultado;
	resultado=0;
}	
}
//Matriz 1
	printf("\nMatriz 1\n");
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("\t%.2d",matriz1[i][j]);
}
	printf("\n");
}
//Matriz 2
	printf("\nMatriz 2\n");
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("\t%.2d",matriz2[i][j]);
}
	printf("\n");
}
//Matriz multiplicación
	printf("\nProducto Matriz\n");
	for(i=0;i<2;i++){
	for(c=0;c<2;c++){
	printf("\t%.2d",result[i][c]);
}
	printf("\n");
}
	}

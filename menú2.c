//Menú de programas Diseño de Algoritmos
#include <stdio.h>
#include<math.h>
int main () {
//Variables de los programas
int opcion, co, ca, base, alt, altura, lado, base2, altura_2, base_mayor, base_menor, altura_3, fact, n;
int filasm, columnasm, aa[10][10], b[10][10], cc[10][10];
int matriz1[2][2],matriz2[2][2],resultado=0, result[2][2];
int ii,jj,ccc;
int matriz[3][3], columna, fila, i=0, j=0;
float h ,a, a1, a2, a3, a4, a5, a6, celcius,fahrenheit, kelvin, celcius2,fahrenheit2,kelvin2, celcius3,fahrenheit3,kelvin3, area, area2, area3;
float horas, costo, salaNet, salaNet2, salaNet3, incr, salaBru, reten, agr;
float ivaReten=0.12;
float ivaAgr=0.16;
float bono=0.05;
int opc, opc2, opc3;
	do {
//Opciones del menu
	printf("\nElige una opción :)\n\n1) Cálculo de triángulos\n2) Cálculo del área de cuadrilateros\n3) Conversión de medidas de temperatura\n4) Suma de  matrices de 2x2 hasta 10x10\n5) Multiplicacion de matrices de 2x2\n6) Transpuesta de una matriz 3x3\n7) Calcular el factorial de un número\n8) Cálculo del salario\n9) Salir\n\n");
	scanf("%d",&opcion);
//Escoger una opción       
	switch (opcion) {
		case 1:{
//Programa para calcular el cálculo de características de triángulos
	printf("\nCálculo de triángulos\n\n");
//Se solicita la opcion a realizar de las opciones que guarda el programa de triángulos y se guarda en opc
	printf("11)Hipotenusa de un triangulo rectangulo\n");
        printf("12)Area de un triangulo\n");
        printf("13)Tercer angulo de un triangulo\n");
        scanf("%d",&opc);	
//Se insertan las opciones que va a tener el programa
	if (opc==11) {
//Cálculo de hipotenusa
        printf("\nEscribe la longitud del cateto adyacente: ");
        scanf("%d",&ca);
        printf ("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&co);
        h = sqrt (co*co+ca*ca);
        printf ("\nLa hipotenusa mide: %f\n",h);
}
//Calculo del área de un triángulo
		if(opc==12){
        printf("\nEscribe la base: ");
        scanf("%d",&base);
        printf("Escribe la altura: ");
        scanf("%d",&alt);
        a = base*alt/2;
        printf ("\nEl area del triangulo es: %f\n",a);
}
//Calculo de tercer ángulo
		if (opc==13){
        printf("\nEscribe el valor de los dos angulos: ");
        scanf("%f%f", &a1, &a2);
        a3 = 180-(a1 + a2);
        printf("\nEl tercer angulo mide: %f\n",a3);
}
else{
	printf("Opción erronea\n");
}}
break;
		case 2:{
//Programa para calcular el área de cuadrilateros
	printf("\nCálculo del área de cuadrilateros\n\n");
//Se solicita la opcion a realizar de las opciones que guarda el programa de cuadrilateros y se guarda en opc2
	printf("21)Área de un rectangulo\n");
	printf("22)Área de un cuadrado\n");
	printf("23)Área de un trapecio\n");
	printf("Elige una opcion\n");
	scanf("%d",&opc2);
//Se insertan las opciones que va a tener el programa
	if (opc2==21){
//Cálculo el área de un cuadrado
        printf("\nEscribir el tamaño  del lado del cuadrado: ");
        scanf("%d",&lado);
        area = (lado*lado);
        printf("El area del cuadrado es: %f\n",area);
}
//Cálculo del área de un rectángulo
	if (opc2==22){
        printf("\nEscribe la longitud de la base: ");
        scanf("%d",&base);
        printf("Escribe la longitud de la altura: ");
        scanf("%d",&altura);
        area2 = base*altura;
        printf("\nEl area del rectangulo es: %f\n",area2);
}
//Cálculo del área de un trapecio
	if (opc2==23){
        printf("\nEscribe la longitud de la base menor: ");
        scanf("%d",&base_menor);
        printf("Escribe la longitud de la base mayor: ");
        scanf("%d",&base_mayor);
        printf("Escribe la longitud de la altura: ");
        scanf("%d",&altura_2);
        area3 = (((base_mayor+base_menor)*altura_2)/2);
        printf("\nEl area del trapecio es: %f\n",area3);       
}
else{
	printf("Opción erronea\n");
}}
break;
		case 3:{
//Programa para calcular equivalencias entre temperaturas Celcius, Fahrenheit y Kelvin
	printf("\nConversión de medidas de temperatura\n\n");
//Se solicita la opcion a realizar de las opciones que guarda el programa de temperatura y se guarda en opc3
        printf("31)Equivalencias de Celcius a Fahrenheit y Kelvin\n");
        printf("32)Equivalencias de Fahrenheit a Celcius y Kelvin\n");
        printf("33)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
        printf("Elige una opcion\n");
        scanf("%d",&opc3);
//Se insertan las opciones que va a tener el programa
	if (opc3==31){
//Cálculo de temperatura de Celcius a Farenheit y Kelvin
        printf("\nEscribe la temperatura en grados Celcius: ");
        scanf("%f",&celcius);
        fahrenheit = (celcius*1.8)+32;
        printf("\nEl equivalente en grados Fahrenheit es de: %f\n",fahrenheit);
        kelvin = celcius+273.15;
        printf("El equivalente en Kelvin es de: %f\n",kelvin);
}
//Cálculo de temperatura de Farenheit a Celcius y Kelvin
	if (opc3==32){
        printf("\nEscribe la temperatura en grados Fahrenheit: ");
        scanf("%f",&fahrenheit2);
        celcius2 = (fahrenheit2-32)/1.8;
        printf("\nEl equivalente en grados Celcius es de: %f\n",celcius2);
        kelvin2 = 5*((fahrenheit2-32)/9)+273.15;
        printf("El equivalente en Kelvin es de: %f\n",kelvin2);
}
//Cálculo de temperatura de Kelvin a Celcius y Farenheit
	if (opc3==33){
        printf("\nEscribe la temperatura en Kelvin: ");
        scanf("%f",&kelvin3);
        celcius3 = kelvin3-273.15;
        printf("\nEl equivalente en grados Celcius es de: %f\n",celcius3);
        fahrenheit3 = 1.8*(kelvin3-273.15)+32;
        printf("El equivalente en Fahrenheit es de: %f\n",fahrenheit3);	
	}
else{
	printf("Opción erronea\n");
}}
break;
		case 4:
//Programa para sumar matrices
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
break;
		case 5:
//Programa de multiplicación de matrices de 2x2
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
break;
		case 6:
//Programa para calcular la transpuesta de una matriz de hasta 3x3
	printf("\nTranspuesta de una matriz 3x3\n\n");
//Se solicitan la cantidad de filas para la matriz y se almacena en fila
	printf("\nDe cuantas filas es la matriz? ");
	scanf("%d", &fila);
//Se solicitan la cantidad de columnas para la matriz y se almacena en columna
	printf("De cuantas columas es la matriz? ");
	scanf("%d", &columna);
	printf("\n");
//Se solicitan los elementos de la matriz y se almacenan
	for(i = 0;i < fila;i++)
{	
	for(j = 0;j < columna;j++)
{
	printf("Introduzca un valor para la matriz posición (%d,%d): ", i+1, j+1);
	scanf("%d", &matriz[i][j]);
}
}
//Impresión de la Matriz Original
	printf("\nMatriz Original\n");
	for(i = 0;i < fila;i++)
{
	for(j = 0;j < columna;j++)
{
	printf("%d\t", matriz[i][j]);
}
	printf("\n");
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
break;
		 case 7:
//Funcionamiento de un factorial
	printf("\nCalcular el factorial de un número\n\n");
//Brindar el número del que se desea obtener el factorial
	printf ("\nDame un numero: ");
	scanf("%d",&n);
	int factorial (int n)
//Instrucciones para el funcionamiento del factorial
{
	long int f2;
	if(n==0)
{
	f2=1;
}
	else
{	
	f2=n*factorial(n-1);
}
	return f2;
}
//Funcion recursiva del factorial y la impresión del resultado
	fact=factorial(n);
	printf("\nEl factorial es = %d \n",fact);
break;
		case 8:
//Cálculo del salario neto a partir de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10000 MXN, agregar un bono del 5%.
	printf("\nCálculo del salario\n\n");
//Cantidad de horas trabajadas
	printf("Ingrese el numero de horas trabajadas: \n");
	scanf("%f",&horas);
//Costo de las horas de trabajo	
	printf("Ingrese el pago por hora trabajada \n");
	scanf("%f",&costo);
//Formulas para determinar los salarios
	salaBru = horas*costo;
	reten = salaNet*ivaReten;
	salaNet = salaBru+agr;
	agr = salaBru*ivaAgr;
	salaNet2 = salaNet-reten;
//Formula para agregar bono
	if (salaNet2<10000){
	incr = salaNet2*bono;
	salaNet3 = salaNet2+incr;
//Impresion de valores del salario
	printf("Salario neto: %f\n",salaNet3);
	printf("Salario bruto: %f\n",salaBru);
	printf("Retencion del 12 porciento: %f\n",reten);
	printf("Impuesto del 16 porciento: %f\n",agr);
	printf("Bono del 5 porciento: %f\n",incr);
}
	else
{
//Impresion de valores del salario
	printf("Salario neto: %f\n",salaNet2);
	printf("Salario bruto: %f\n",salaBru);
	printf("Retencion del 12 porciento: %f\n",reten);
	printf("Impuesto del 16 porciento: %f\n",agr);
}
break;
		case 9:
break;
default:
	printf("Opción erronea\n");
break;
}  
}
	while (opcion != 9);
        return 0;
}

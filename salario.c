//Calculo del salario neto a partir de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10000 MXN, agregar un bono del 5%.
//$100/hora
//8 horas de trabajo

#include <stdio.h>

int main()
{
//Declaracion de variables para la ejecucion de formulas
	float horas, costo, salaNet, salaNet2, salaNet3, incr, salaBru, reten, agr;
	float ivaReten=0.12;
	float ivaAgr=0.16;
	float bono=0.05;

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
}

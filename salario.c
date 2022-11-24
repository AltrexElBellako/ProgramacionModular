//Calculo del salario neto a partir de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10000 MXN, agregar un bono del 5%.
//$100/hora
//8 horas de trabajo

#include <stdio.h>

int main()
{
	float horas, salaNet, salaNet2, salaNet3, incr, salaBru, reten, reten2;
	float ivaReten=0.12;
	float ivaAgr=0.16;
	float bono=0.05;
	float costo=100;
printf("Cálculo de salario\n");
printf("Ingrese el numero de horas trabajadas: \n");
scanf("%f",&horas);
	if (horas<100){
	salaBru = horas*costo;
	reten = salaBru*ivaReten;
	salaNet = salaBru-reten;
	reten2 = salaNet*ivaAgr;
	salaNet2 = salaNet-reten2;
	incr = salaNet2*bono;
	salaNet3 = salaNet2+incr;
printf("Salario neto: %f\n",salaNet3);
printf("Salario bruto: %f\n",salaNet);
printf("Retencion del 12 porciento: %f\n",reten);
printf("Impuesto del 16 porciento: %f\n",reten2);
printf("Bono del 5 porciento: %f\n",incr);
}
	else{
	salaBru= horas*costo;
	reten= salaBru*ivaReten;
	salaNet= salaBru-reten;
	reten2= salaNet*ivaAgr;
	salaNet2= salaNet-reten2;
printf("Salario neto: %f\n",salaNet2);
printf("Salario bruto: %f\n",salaNet);
printf("Retencion del 12 porciento: %f\n",reten);
printf("Impuesto del 16 porciento: %f\n",reten2);
}
}

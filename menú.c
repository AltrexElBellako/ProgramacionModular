//Menu de programas Diseño de Algoritmos

#include <stdio.h>
#include<math.h>

int main () 
{
int opcion, co, ca, base, alt, altura, lado, base2, altura_2, base_mayor, base_menor, altura_3, fact, n;
int tamaño, aa[10][10], b[10][10], cc[10][10];
int matriz1[2][2],matriz2[2][2],resultado=0, result[2][2];
int ii,jj,ccc;
int matriz[3][3], columna, fila, i=0, j=0;
float h ,a, a1, a2, a3, a4, a5, a6, celcius,fahrenheit, kelvin, celcius2,fahrenheit2,kelvin2, celcius3,fahrenheit3,kelvin3, area, area2, area3;
float horas, salaNet, salaNet2, salaNet3, incr, salaBru, reten, reten2;
float ivaReten=0.12;
float ivaAgr=0.16;
float costo=100;
float bono=0.05;
char opc, opc2, opc3;
        do{
                //Opciones del menu
               printf("1) Cálculo de triangulos\n2) Cálculo del área de cuadrilateros\n3) Conversión de medidas de temperatura\n4) Suma de  matrices de 2x2 hasta 10x10\n5) Multiplicacion de matrices de 2x2\n6) Calcular el factorial de un número\n7) Transpuesta de una matriz 3x3\n8) Cálculo de salario\n9) Salir\n");
               scanf("%d",&opcion);
       
      switch (opcion) {
              case 1:

	printf("a)Hipotenusa de un triangulo rectangulo\n");
        printf("b)Area de un triangulo\n");
        printf("c)Tercer angulo de un triangulo\n");
        printf("Elige una opcion\n");
        scanf("%c",&opc);
	switch (opc) {
		case 'a':
        printf("Escribe la longitud del cateto adyacente:");
        scanf("%d",&ca);
        printf ("Escribe la longitud del cateto opuesto:");
        scanf("%d",&co);
        h = sqrt (co*co+ca*ca);
        printf ("La hipotenusa mide: %f\n",h);
	break;


		case 'b':
        printf("Escribe la base:");
        scanf("%d",&base);
        printf("Escribe la altura:");
        scanf("%d",&alt);
        a = base*alt/2;
        printf ("El area del triangulo es %f\n",a);
	break;


		case 'c':
        printf("Escribe el valor de los dos angulos:");
        scanf("%f%f", &a1, &a2);
        a3 = 180-(a1 + a2);
        printf("El tercer angulo mide: %f\n",a3);
	break;

	default:
		printf("Opción inválida\n");
}
	break;

//calcular el area de un cuadrado

	
		case 2:
        printf("d)area de un rectangulo\n");
        printf("e)area de un cuadrado\n");
        printf("f)area de un trapecio\n");
        printf("Elige una opcion\n");
        scanf("%c",&opc2);
	 switch (opc2){

	case 'd':
        printf("escribir el tamaño  del lado del cuadrado:");
        scanf("%d",&lado);

        area = (lado*lado);
        printf("El area del cuadrado es: %f\n",area);
	break;
//Calculo de area de un rectangulo
	case 'e':
        printf("Escribe la longitud de la base:");
        scanf("%d",&base);
        printf("Escribe la longitud de la altura:");
        scanf("%d",&altura);
        area2 = base*altura;
        printf("El area del rectangulo es: %f\n",area2);
	break;
//Calculo de area de un trapecio
	case 'f':
        printf("Escribe la longitud de la base menor:");
        scanf("%d",&base_menor);
        printf("Escribe la longitud de la base mayor:");
        scanf("%d",&base_mayor);
        printf("Escribe la longitud de la altura:");
        scanf("%d",&altura_2);
        area3 = (((base_mayor+base_menor)*altura_2)/2);
        printf("El area del trapecio es: %f\n",area3);       
        break;

	default:
		printf("Opción inválida\n");
}
	break;

//Calculo de temperatuta de Celcius a Fahrenheit y Kelvin

		case 3:
        printf("g)Equivalencias de Celcius a Fahrenheit y Kelvin\n");
        printf("h)Equivalencias de Fahrenheit a Celcius y Kelvin\n");
        printf("i)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
        printf("Elige una opcion\n");
        scanf("%c",&opc);
	switch (opc3){
	
	case 'g':
        printf("Escribe la temperatura en grados Celcius:");
        scanf("%f",&celcius);

        fahrenheit = (celcius*1.8)+32;
        printf("El equivalente en grados Fahrenheit es de: %f\n",fahrenheit);
        kelvin = celcius+273.15;
        printf("El equivalente en Kelvin es de: %f\n",kelvin);
	break;
//Calculo de temperatura de Farenheit a Celcius y Kelvin

	case 'h':
        printf("Escribe la temperatura en grados Fahrenheit:");
        scanf("%f",&fahrenheit2);

        celcius2 = (fahrenheit2-32)/1.8;
        printf("El equivalente en grados Celcius es de: %f\n",celcius2);
        kelvin2 = 5*((fahrenheit2-32)/9)+273.15;
        printf("El equivalente en Kelvin es de: %f\n",kelvin2);
	break;

//Calculo de temperatura de Kelvin a Celcius y Farenheit
	case'i':
        printf("Escribe la temperatura en Kelvin:");
        scanf("%f",&kelvin3);

        celcius3 = kelvin3-273.15;
        printf("El equivalente en grados Celcius es de: %f\n",celcius3);
        fahrenheit3 = 1.8*(kelvin3-273.15)+32;
        printf("El equivalente en Fahrenheit es de: %f\n",fahrenheit3);
	break;
	default:
		printf("Opcion invalida\n");

        }
	break;


//Programa para sumar matrices

		case 4:
	printf("Teclee tamaño de la matriz ");
                        scanf("%d",&tamaño);
	for (int i=0;i<tamaño;i++)
	{

		for (int j=0;j<tamaño;j++)
		{
	printf("Ingrese el valor de la matriz a posicion[%d],[%d]",i+1,j+1);
                        scanf("%i",&aa[i][j]);
		}
	}

	for (int i=0;i<tamaño;i++)	
	{

		for (int j=0;j<tamaño;j++)
		{
		printf("Ingrese el valor de la matriz b posicion [%d],[%d]",i+1,j+1);
			scanf("%i",&b[i][j]);
		}
	}

for (int i=0;i<tamaño;i++)
			{

		for (int j=0;j<tamaño;j++)
	{
		cc[i][j]=aa[i][j]+b[i][j];
		printf("%d\t", cc[i][j]);
	}
	}	
	break;

		case 5:
	for(ii=0;ii<2;ii++)
	for(jj=0;jj<2;jj++)
	result[ii][jj]=0;
	for(ii=0;ii<2;ii++)
			{
				for(jj=0;jj<2;jj++)
				{
					printf("Introduzca un valor para la matriz 1(%d,%d):",ii+1,jj+1);
					scanf("%d", &matriz1[ii][jj]);
				}
			}
			for(ii=0;ii<2;ii++)
			{
				for(jj=0;jj<2;jj++)
				{
					printf("Introduzca un valor para la matriz 2(%d,%d):",ii+1,jj+1);
					scanf("%d", &matriz2[ii][jj]);
				}
			}		
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
			printf("Producto Matriz ");
				for(ii=0;ii<2;ii++)
				{

					for(ccc=0;ccc<2;ccc++)
					{
						printf("%d\t",result[ii][ccc]);
					}
				}
		
                      break;
		case 6:
	printf("De cuantas filas es la matriz?\n ");
		scanf("%d", &fila);

		printf("De cuantas columas es la matriz?\n ");
		scanf("%d", &columna);

	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("Escribe el valor de  (%d,%d)", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}


	printf("Matriz Original\n");

	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Matriz Transpuesta\n");

	for(i = 0;i < columna;i++)
	{
		for(j = 0;j < fila;j++)
		{
			printf("%d\t", matriz[j][i]);
		}
	}
	break;

		 case 7:
	printf ("\nDame un numero: ");
	scanf("%d",&n);
	int factorial (int n)
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
	fact=factorial(n);
	printf("\nEl factorial es = %d \n",fact);
	break;

		case 8:
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
	break;
		case 9:
                      break;
              default:
	      printf("Opcion incorrecta\n");
              break;
	      }  
} while (opcion != 9);
        return 0;
}


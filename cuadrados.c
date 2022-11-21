#include <stdio.h>

//calcular el area de un cuadrado
void cuadrado()
{
        int  lado;
        float area;
        printf("escribir el tamaño  del lado del cuadrado:");
        scanf("%d",&lado);

        area = (lado*lado);
        printf("El area del cuadrado es: %f",area);
}
//Calculo de area de un rectangulo
void rectangulo ()
{
        int base, altura;
        float area2;
        printf("Escribe la longitud de la base:");
        scanf("%d",&base);
        printf("Escribe la longitud de la altura:");
        scanf("%d",&altura);
        area2 = base*altura;
        printf("El area del rectangulo es: %f",area2);
}
//Calculo de area de un trapecio
void trapecio ()
{
        int base_mayor, base_menor, altura_2;
        float area3;
        printf("Escribe la longitud de la base menor:");
        scanf("%d",&base_menor);
        printf("Escribe la longitud de la base mayor:");
        scanf("%d",&base_mayor);
        printf("Escribe la longitud de la altura:");
        scanf("%d",&altura_2);
        area3 = (((base_mayor+base_menor)*altura_2)/2);
        printf("El area del trapecio es: %f",area3);

}
int main ()

{
        char opc;
        printf("1)area de un rectangulo\n");
        printf("2)area de un cuadrado\n");
        printf("3)area de un trapecio\n");
        printf("Elige una opcion\n");
        scanf("%c",&opc);

        switch (opc)
        {
                case '1' : rectangulo();
                           break;
                case '2' : cuadrado();
                           break;
                case '3': trapecio();
                          break;
        }
        return 0;
}


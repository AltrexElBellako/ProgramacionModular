//Programa: triangulo.c
//De la primaria: Teorema de Pitágoras
//La suma de cada cateto al cuadrado es igual a la hipotenusa al cuadrado
//Triángulo rectangulo: un ángulo de 90°
//
//Cálculo de la hipotenusa
#include <stdio.h>
#include <math.h>
void hipotenusa ()
{
        int co, ca;
        float h;
        printf("Escribe la longituda del cateto adyacente:");
        scanf("%d",&ca);
        printf ("Escribe la longituda del cateto opuesto:");
        scanf("%d",&co);
        h = sqrt (co*co+ca*ca);
        printf ("La hipotenusa mide: %f",h);
}
void area ()
{
        int base, alt;
        float a;
        printf("Escribe la base:");
        scanf("%d",&base);
        printf("Escribe la altura:");
        scanf("%d",&alt);
        a = base*alt/2;
        printf ("El area del triangulo es %f",a);
}
void angulo ()
{
        float a1, a2, a3;
        printf("Escribe el valor de los dos angulos:");
        scanf("%f%f", &a1, &a2);
        a3 = 180-(a1 + a2);
        printf("El tercer angulo mide: %f",a3);
}
int main()
{
        char opc;
        printf("a)Hipotenusa de un triangulo rectangulo\n");
        printf("b)Area de un triangulo\n");
        printf("c)Tercer angulo de un triangulo");
        printf("Elige una opcion\n");
        scanf("%c",&opc);

        switch (opc)
        {
                case 'a' : hipotenusa ();
                           break;
                case 'b' : area ();
                           break;
                case 'c' : angulo ();
                           break;
        }
        return 0;
}


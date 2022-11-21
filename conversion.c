//Programa para calcular equivalencias entre temperaturas Celcius, Fahrenheit y Kelvin.
#include <stdio.h>
//Calculo de temperatuta de Celcius a Fahrenheit y Kelvin
void celcius()
{
        float celcius,fahrenheit,kelvin;
        printf("Escribe la temperatura en grados Celcius:");
        scanf("%f",&celcius);

        fahrenheit = (celcius*1.8)+32;
        printf("El equivalente en grados Fahrenheit es de: %f",fahrenheit);
        kelvin = celcius+273.15;
        printf("El equivalente en Kelvin es de: %f",kelvin);
}
//Calculo de temperatura de Farenheit a Celcius y Kelvin
void fahrenheit ()
{
        float celcius2,fahrenheit2,kelvin2;
        printf("Escribe la temperatura en grados Fahrenheit:");
        scanf("%f",&fahrenheit2);

        celcius2 = (fahrenheit2-32)/1.8;
        printf("El equivalente en grados Celcius es de: %f",celcius2);
        kelvin2 = 5*((fahrenheit2-32)/9)+273.15;
        printf("El equivalente en Kelvin es de: %f",kelvin2);

}
//Calculo de temperatura de Kelvin a Celcius y Farenheit
void kelvin ()
{
        float celcius3,fahrenheit3,kelvin3;
        printf("Escribe la temperatura en Kelvin:");
        scanf("%f",&kelvin3);

        celcius3 = kelvin3-273.15;
        printf("El equivalente en grados Celcius es de: %f",celcius3);
        fahrenheit3 = 1.8*(kelvin3-273.15)+32;
        printf("El equivalente en Fahrenheit es de: %f",fahrenheit3);

}
int main ()

{
        char opc;
        printf("a)Equivalencias de Celcius a Fahrenheit y Kelvin\n");
        printf("b)Equivalencias de Fahrenheit a Celcius y Kelvin\n");
        printf("c)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
        printf("Elige una opcion\n");
        scanf("%c",&opc);

        switch (opc)
        {
                case 'a' : celcius();
                           break;
                case 'b' : fahrenheit();
                           break;
                case 'c': kelvin();
                          break;
        }
        return 0;
}

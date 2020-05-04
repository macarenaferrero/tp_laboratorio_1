/*
 ============================================================================
 Name        : TP1.c
 Author      : Macarena
 Version     : I
 Copyright   : Your copyright notice
 Description : Trabajo Práctico I, Ansi-style
 ============================================================================

Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
*/

#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"


int main(void)
{

		setbuf(stdout, NULL);

		int opcion;
		int valorA;
		int valorB;
		int resultadoSumar;
		int resultadoRestar;
		int resultadoMultiplicar;
		float resultadoDividir;
		int resultadoFactorialA;
		int resultadoFactorialB;

		do
		{

			if(utn_getInt (&opcion, "1. Ingrese valor A\n2. Ingrese valor B\n3. Operar valores [+;-;*;/;!]\n4. Resultados de las operaciones\n5. Salir\n", "Opcion no válida\n", 1, 5, 2)==0)
			{
				switch (opcion)
				{
				case 1:
					printf("Ingrese el valor de A\n");
					scanf("%d", &valorA);
					printf("El valor de A es: %d\n",valorA);
					break;

				case 2:
					printf("Ingrese el valor de B\n");
					scanf("%d", &valorB);
					printf("El valor de B es: %d\n",valorB);
					break;

				case 3:
					printf("Se realizaron todas las operaciones.\n\n");
					resultadoSumar=utn_sumInt (valorA,valorB);
					resultadoRestar=utn_restarInt (valorA,valorB);
					resultadoMultiplicar=utn_multInt(valorA,valorB);
					if(valorB!=0)
					{
					resultadoDividir=utn_divInt(valorA,valorB);
					}
					resultadoFactorialA=utn_factorial(valorA);
					resultadoFactorialB=utn_factorial(valorB);
					break;
				case 4:
					printf("\nLa suma de %d y %d es : %d\n", valorA, valorB, resultadoSumar);
					printf("\nLa resta de %d y %d es: %d\n",valorA, valorB, resultadoRestar);
					printf("\nLa multiplicacion de %d y %d es : %d", valorA, valorB, resultadoMultiplicar);
					if(valorB==0)
					{
						printf("\nNo se puede dividir por 0\n\n");
					}else
					{
					printf("\n\nLa division de %d y %d es : %.2f\n", valorA, valorB, resultadoDividir);
					}
					printf("\nEl factorial de %d es %d\n", valorA, resultadoFactorialA);
					printf("\nEl factorial de %d es %d\n\n", valorB, resultadoFactorialB);
					break;
				}
			}



		}while(opcion!=5);

			return EXIT_SUCCESS;
}




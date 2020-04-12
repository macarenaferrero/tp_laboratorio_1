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

		do
		{

			if(utn_getInt (&opcion, "1. Ingrese valor A\n2. Ingrese valor B\n3. Operar valores [+;-;*;/;!]\n4. Resultados de las operaciones\n5. Salir\n", "Opcion no válida", 1, 5, 2)==0)
			{
				switch (opcion)
				{
				case 1:
					if(utn_getInt(&valorA, "Elija el valor de A\n","Valor incorrecto.Reintente\n",0,500,2)==0)
					{
							printf("\nEl valor de A = %d",valorA);
							scanf("%d", &valorA);
					}
					else
					{
							printf("\nERROR");
					}
					break;

				case 2:
					if(utn_getInt(&valorB, "Elija el valor de B\n","Valor incorrecto. Reintente\n",0,500,2)==0)
					{
							printf("\nEl valor de B = %d",valorB);
							scanf("%d", &valorB);
					}
					else
					{
							printf("\nERROR");
					}
					break;

				case 3:
					if(utn_sumInt (&resultadoSumar, valorA, valorB)==0)
					{
						printf("Se pudo sumar.\n");
					}
					else
					{
						printf("\nERROR EN LA SUMA");
					}
					break;
				case 4:
						printf("La suma de A y B es : %d", resultadoSumar);
					break;
				}
			}



		}while(opcion!=5);

			return EXIT_SUCCESS;
}




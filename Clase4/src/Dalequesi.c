/*
 ============================================================================
 Name        : Clasesabado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int edad;
	int peso;
	int respuesta;
	char letra;

	respuesta = utn_getChar(&letra,"\nLetra?","\nError la letra debe ser desde A a J\n",'A','J',1);
		if(respuesta == 0)
		{
			printf("\nLa letra es: %c",letra);
		}
		else
		{
			printf("ERROR");
		}

	respuesta = utn_getInt(&edad,"\nEdad?","\nError la edad debe ser desde 0 a 199",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d",edad);
	}
	else
	{
		printf("ERROR");
	}

	respuesta = utn_getInt(&peso,"\nPeso?","\nError peso debe ser desde 0 a 500",0,500,3);
	if(respuesta == 0)
	{
		printf("El peso es: %d",peso);
	}
	else
	{
		printf("ERROR");
	}




	return EXIT_SUCCESS;
}



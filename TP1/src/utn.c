/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: maculina
 */

#include <stdio_ext.h>
#include <stdlib.h>


int utn_getInt (int* pResultado, char* mensaje, char* mError, int min, int max, int reintentos)
{
	int bufferInt;
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mError != NULL && min <= max && reintentos >= 0)
	{
		do
		{

			printf("%s", mensaje);
			scanf("%d", &bufferInt);

			if(bufferInt >= min && bufferInt <= max)
			{
					*pResultado = bufferInt;
					retorno = 0;
					break;
			}
			else
			{
					__fpurge(stdin);
					printf("%s", mError);
					reintentos--;
			}
		}while(reintentos>=0);
	}
			return retorno;
}


float utn_getFloat (float* pResultado, char* mensaje, char* mError, float min, float max, int reintentos)
{
	float bufferFloat;
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mError != NULL && min <= max && reintentos >= 0)
	{
		do
		{

			printf("%s", mensaje);
			scanf("%f", &bufferFloat);

			if(bufferFloat >= min && bufferFloat <= max)
			{
					*pResultado = bufferFloat;
					retorno = 0;
					break;
			}
			else
			{
					__fpurge(stdin);
					printf("%s", mError);
					reintentos--;
			}
		}while(reintentos>=0);
	}
			return retorno;
}





char utn_getChar (char* pResultado, char* mensaje, char* mError, char min, char max, int reintentos)
{
	char bufferChar;
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mError != NULL && min <= max && reintentos >= 0)
	{
		do
		{

			printf("%s", mensaje);
			__fpurge(stdin);
			scanf("%c", &bufferChar);

			if(bufferChar >= min && bufferChar <= max)
			{
					*pResultado = bufferChar;
					retorno = 0;
					break;
			}

			else
			{
					__fpurge(stdin);
					printf("%s", mError);
					reintentos--;
			}
		}while(reintentos>=0);
	}
			return retorno;
}

int utn_sumInt (int* pResultadoSuma, int valorA, int valorB)
{
	int resultadoSumar;
	int retorno = -1;

	if(pResultadoSuma != NULL && valorA != NULL && valorB != NULL)
	{
		resultadoSumar = valorA + valorB;
		scanf("%d", &resultadoSumar);
		*pResultadoSuma = resultadoSumar;
		retorno = 0;
	}
			return retorno;
}










/*

int utn_promediarArray(float* pPromedioResultado, int array[], int len)
{

	int i;
	int acumuladorSuma=0;
	int retorno = -1;

	if(pPromedioResultado != NULL && array != NULL && len > 0){
		for (i=0; i<len; i++)
		{
			acumuladorSuma = acumuladorSuma + array[i];
		}

		//printf ("%d", suma);

		*pPromedioResultado = (float)acumuladorSuma/len;
		retorno = 0;
		break;
	}

	return retorno;
}

int utn_sumar(int* resultadoSuma, int arrayNumeros[])
{
	int bufferInt;
	int retorno = -1;



}
*/

/*
Ejercicio 6.
Tomar la biblioteca producto del ej5  y realizar un programa
con un menu de dos opciones:

    a) Cargar un producto
    b) Imprimir lista productos

Se debera utilizar la funcion que devuelve una posicion vacia
para indicar en que posicion del array se guardaran los datos
ingresados.

 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Producto.h"

#define PROD_LEN	100

int main(void) {

	Producto productos[PROD_LEN];
	int respuesta;
	int indice;
	int i;
	char valor;

		if(!prod_initArray(productos, PROD_LEN))
		{
			printf("Inicializacion ok\n");
		}

		respuesta=utn_getChar(&valor, "Ingrese", "Error", 'a', 'z', 2);
		printf("La funcion salió: %d y la letra es: %c", respuesta, valor);
/*
do
{
		if(!utn_getNumero(&respuesta, "1) Cargar un producto\n2) Imprimir lista productos\n3) Salir\n", "Opcion incorrecta", 1, 3, 2))
		{
			switch(respuesta)
			{
				case 1:
					if(prod_getEmptyIndex(productos, PROD_LEN, &indice)==0)
					{
					printf("Se cargará en el espacio: %d",indice);
					}
					if(prod_updateArray(productos, PROD_LEN, indice)==0)
					{
						printf("Se cargó correctamente\n");
					}
					break;
				case 2:
					for(i=0;i<PROD_LEN;i++)
					{
						if(productos[i].isEmpty == 0)
						{
						prod_imprimir(&productos[i]);
						}

					}
					break;


			}
		}
}while(respuesta != 3);
*/
		return EXIT_SUCCESS;
}




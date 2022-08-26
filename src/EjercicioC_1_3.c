/*
 ============================================================================
 Name        : Ejercicio1_3.c
 Author      : Brian Alan Suarez
 Version     : (Entradas, procesos y salidas) Ejercicio 1_3
 Copyright   : Your copyright notice
 Description :

ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int primerNumero = 0;
	int segundoNumero = 0;
	int tercerNumero = 0;

	printf("Ingrese el primer numero : ");
	scanf("%d", &primerNumero);

	printf("Ingrese el segundo numero : ");
	scanf("%d", &segundoNumero);

	printf("Ingrese el tercer numero : ");
	scanf("%d", &tercerNumero);

	printf("\nNUMEROS INGRESADOS : %d - %d - %d\n", primerNumero, segundoNumero, tercerNumero);


	if(primerNumero != segundoNumero && primerNumero != tercerNumero && segundoNumero != tercerNumero)
	{

		if((primerNumero > segundoNumero && primerNumero < tercerNumero) || (primerNumero < segundoNumero && primerNumero > tercerNumero))		{
			printf("El primer numero [%d] es el del medio.", primerNumero);
		}
		else if((segundoNumero < tercerNumero && segundoNumero > primerNumero) || (segundoNumero > tercerNumero && segundoNumero < primerNumero))
		{
			printf("el segundo numero [%d] es el del medio.", segundoNumero);
		}
		else
		{
			printf("el tercer numero [%d] es el del medio.", tercerNumero);
		}
	}
	else
	{
		printf("No hay numero medio");
	}


return 0;

}

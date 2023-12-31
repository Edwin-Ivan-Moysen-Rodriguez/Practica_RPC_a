/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include "rand.h"/*Libreria necearia para la funcion de nuestro progrma, la 
cual fue creada despues de compilar el archivo Makefile, contiene la llamada
a los servicios necesarios para la funcion de nuestro programa*/

void *
inicializa_random_1_svc(long *argp, struct svc_req *rqstp)//Servicio 1, usado para iniciar 
//con la generacion de numeros aleatorios
{
	static char * result;//Variable usada para guardar el resultado

	srandom(*argp);//Generamos el numero aleatorio

	return (void *) &result;//Retornamos el resultado, a donde fue llamado el servicio
}

int *
obtiene_siguiente_random_1_svc(void *argp, struct svc_req *rqstp)//Servicio 2, usado para obtener 
//el siguiente numero aleatorio
{
	static int  result;//Variable en donde guardaremos el resultado obtenido

	result=random();//Asignamos un numero aleatorio

	return &result;//Retornamos el resultado, a donde fue llamado el servicio
}

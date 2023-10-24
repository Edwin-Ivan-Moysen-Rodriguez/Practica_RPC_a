/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
//Servicio de suma, retorna un puntero tipo flotante
float *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static float result;//variable en cual se almacenara el resultado
	result = (float)argp->a + (float)argp->b;//realizamos las operaciones, mediante el puntero de estructura argp
	//y el operado de componente (operador flecha) con el cual sumaremos los elemnetos a + b de la estructura,
	//el valor sera asiganado a la varible result
	printf("El procedimiento SUMA ha sido invocado remotamente (numero1+numero2): %f\n",result);//Imprimos la operacion y resultado
	return &result;//retornamos la direccion de memoria de result
}
//Servicio de retsa, retorna un puntero tipo flotante
float *
resta_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static float result;
	result = (float)argp->a - (float)argp->b;//realizamos las operaciones, mediante el puntero de estructura argp
	//y el operado de componente (operador flecha) con el cual restaremos los elemnetos a - b de la estructura,
	//el valor sera asiganado a la varible result
	printf("El procedimiento RESTA ha sido invocado remotamente (numero1-numero2): %f\n",result);
	return &result;//retornamos la direccion de memoria de result
}
//Servicio de multiplicacion, retorna un puntero tipo flotante
float *
multiplicacion_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static float result;
	result = (float)argp->a * (float)argp->b;//realizamos las operaciones, mediante el puntero de estructura argp
	//y el operado de componente (operador flecha) con el cual multiplicamos los elemnetos a * b de la estructura,
	//el valor sera asiganado a la varible result
	printf("El procedimiento MULTIPLICACION ha sido invocado remotamente (numero1*numero2): %f\n",result);
	return &result;//retornamos la direccion de memoria de result
}
//Servicio de division, retorna un puntero tipo flotante
float *
division_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static float result;
	result = (float)argp->a / (float)argp->b;//realizamos las operaciones, mediante el puntero de estructura argp
	//y el operado de componente (operador flecha) con el cual dividiremos los elemnetos a / b de la estructura,
	//el valor sera asiganado a la varible result
	printf("El procedimiento DIVISION ha sido invocado remotamente (numero1/numero2): %f\n\n",result);
	return &result;//retornamos la direccion de memoria de result
}

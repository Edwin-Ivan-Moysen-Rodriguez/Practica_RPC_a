/*Estructura utilizada para almacer los dos numeros
necesario para realizar las operaciones. Es empleada,
ya que los servicios no pueden tener mas de un argumento,
por lo cual emplemaos un estructura*/
struct dupla_int
{
    int a;
    int b;
};
/*Generaremos nuestro programa*/
program CALCULADORA_PROG
{ 
    version CALCULADORA_VERS
{ 
    /*Servicios de nuestro programa, indicando el tipo de 
    dato que retornara, asi como el parametro a utilizar
    y sus respectivo numero de servicio*/
    float SUMA(dupla_int) = 1;
    float RESTA(dupla_int) = 2;
    float MULTIPLICACION(dupla_int) = 3;
    float DIVISION(dupla_int) = 4;
}
= 1;/*La version de programa es 1*/
}= 0x23451111;/*Identificador del programa*/

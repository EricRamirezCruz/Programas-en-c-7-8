#include  <stdio.h>
int  main ()
{
     /* Eric Ramirez Cruz
    Equipo AMUKE
    21 abr 21
    Programa 7. Pide dos valores reales,  calcula el volumen de un trapecio y muestra resultado
    */

    float valorI, porcen, valorF;

    printf ("\n \n Programa 7" );
    printf ("\n \n Saca el porcentaje ");
    printf ("\n \n Dame el primer valor ");
    scanf ("%f", &valorI); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el porcentaje (%) ");
    scanf ( "%f", &porcen); // Permite capturar un valor real y lo guarda en variable primer
    valorF = valorI * (porcen / 100); // Formula matematica para calcular el volumen de un trapecio.
    printf ("\n El valor final es %f", valorF);

    return  0;
}
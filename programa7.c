#include  <stdio.h>
int  main ()
{
     /* Eric Ramirez Cruz
    Equipo AMUKE
    21 abr 21
    Programa 7. valores reales,  calcula el porcentaje de un valor numerico
    */

    float valorI, porcen, valorF;

    printf ("\n \n Programa 7" );
    printf ("\n \n Saca el porcentaje ");
    printf ("\n \n Dame el primer valor ");
    scanf ("%f", &valorI); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el porcentaje (%) ");
    scanf ( "%f", &porcen); // Permite capturar un valor real y lo guarda en variable primer
    valorF = valorI * (porcen / 100); // Formula matematica para calcular porcentaje.
    printf ("\n El valor final es %f", valorF);

    return  0;
}
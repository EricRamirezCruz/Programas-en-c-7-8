#include  <stdio.h>
int  main ()
{
     /* Eric Ramirez Cruz
    Equipo AMUKE
    30 abr 21
    Programa 8. Pide cinco valores,  calcula el promedio de 5 calificaciones 
    */

    float calif1, calif2, calif3, calif4, calif5, prom;

    printf ("\n \n Programa 8" );
    printf ("\n \n Saca el promedio ");
    printf ("\n \n Dame la calificacion 1 ");// Permite capturar un valor real y lo guarda en variable primer
    scanf ("%f", &calif1);
    printf ("\n \n Dame la calificacion 2 ");
    scanf ("%f", &calif2); 
    printf ("\n \n Dame la calificacion 3 ");
    scanf ("%f", &calif3); 
    printf ("\n \n Dame la calificacion 4 ");
    scanf ("%f", &calif4); 
    printf ("\n \n Dame la calificacion 5 ");
    scanf ("%f", &calif5); 
    
    prom = (calif1 + calif2 + calif3 + calif4 + calif5) / 5; // Formula matematica para calcular el promedio.
    printf ("\n El promedio final es %f", prom);

    return  0;
}
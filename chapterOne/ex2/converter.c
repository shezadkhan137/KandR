#include <stdio.h>

/* Print F to C table 
 for far = 0, 10, 20 */

int main ()
{
    float fahr, cels;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit\t\tCelsius\n");
    printf("===========\t\t======\n");

    while (fahr <= upper){
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%3.1f\t\t\t%3.1f\n", fahr, cels);
        fahr += step;
    }
    return 0;
}

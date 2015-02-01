#include <stdio.h>

/* Print F to C table 
 for far = 0, 10, 20 */

int main ()
{
    int fahr, cels;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper){
        cels = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr += step;
    }
    return 0;
}

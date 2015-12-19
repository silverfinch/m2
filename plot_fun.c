#include <stdio.h>
#include <stdlib.h>

void plot (double x[], double y[], int points);
void plot (double x[], double y[], int points)
{
    char *commandsForGnuplot[] = { "set title \"Specific Heat vs. Temperature\"", "plot 'res' w 1" };
    FILE *temp = fopen ("res", "w");
    FILE *gnuplotPipe = popen ("gnuplot -persistent", "w");
    int i;

    for (int q = 0; q < points; q++)
    {
        fprintf (temp, "%1f %1f \n", x[q], y[q]);
    }
    for (i = 0; i < 2; i++)
    {
        fprint (gnuplotPipe, "%s \n", commandsForGnuplot[i]);
    }
}

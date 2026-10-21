#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    printf("\t\t --------PROJECTILE SIMULATOR--------- \n \n");
    float u, theta, g = 9.8;

    printf("Enter initial velocity u (m/s): ");
    scanf("%f", &u);
    printf("Enter angle theta (degrees, 1 to 89): ");
    scanf("%f", &theta);

    if (u <= 0 || theta <= 0 || theta >= 90)
    {
        printf("Please enter u > 0 and 0 < theta < 90\n");
        return 0;
    }

    float th = theta * PI / 180;          /* degrees -> radians */

    float T = 2 * u * sin(th) / g;                      /* time of flight */
    float H = (u * sin(th)) * (u * sin(th)) / (2 * g);  /* max height     */
    float R = u * u * sin(2 * th) / g;                  /* range          */

    printf("\nTime of flight = %.2f seconds\n", T);
    printf("Max height     = %.2f meters\n", H);
    printf("Range          = %.2f meters\n\n", R);

    /* hard coded parabola (not to scale) */
    /* top row: dashed line at max height; the value is written beside the vertical line */
    printf("- - - - - - - - - - - - - -   *   - - - - - - - - - - - - - -\n");
    printf("                         *    |    *\n");
    printf("                     *        |        *\n");
    printf("                 *            |            *\n");
    printf("              *               |               *\n");
    printf("           *                  |                  *\n");
    printf("        *                     |                     *\n");
    printf("      *                       | Max height = %-5.2f m  *\n", H);
    printf("    *                         |                         *\n");
    printf("  *                           |                           *\n");
    printf("_____________________________________________________________\n");
    printf("<------------- Range R = %.2f m ---------------------------->\n", R);

    return 0;
}

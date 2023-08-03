#include <stdio.h>
#include <stdbool.h>
#include <randlib.h>
#include <getnum.h>
#define __USE_GNU
#include <math.h>

#define RADIUS 1

bool is_inside_circle(double x, double y, double radius);


int main() {
    randomize();
    double pi = 1;
    int inside_circle_counter = 1;

    int iterations = getint("Cuantas iteraciones desea hacer? ");

    double x, y;
    bool is_inside;
    printf(" Iteracion |    PI    | IN? | (x, y)\n");
    for(int i = 1; i <= iterations; i++) {
        x = randReal(-1, 1);
        y = randReal(-1, 1);

        is_inside = is_inside_circle(x, y, RADIUS);

        if(is_inside) {
            inside_circle_counter++;
        }
        pi = (double)(4*inside_circle_counter)/(i);
        printf("%10d | %.6f | %3s | (%.2f, %.2f)\n", i, pi, is_inside?"yes": "no", x, y);
    }
    putchar('\n');
    printf("PI: %.8f\n", pi);
    printf("Error: %.2f%%\n", ((pi - M_PIf) * 100)/M_PIf);
    return 0;
}

bool is_inside_circle(double x, double y, double r) {
    return ((x*x) + (y*y)) <= (r*r);
}


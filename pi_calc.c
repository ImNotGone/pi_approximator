#include <stdio.h>
#include <stdbool.h>
#include <randlib.h>
#include <getnum.h>

#define RADIUS 1

bool is_inside_circle(double x, double y, double radius);


int main() {
    randomize();
    double pi = 1;
    int inside_circle_counter = 1;

    int iterations = getint("Cuantas iteraciones desea hacer? ");

    double x, y;
    printf(" Iteracion | PI\n");
    for(int i = 1; i <= iterations; i++) {
        x = randReal(-1, 1);
        y = randReal(-1, 1);

        if(is_inside_circle(x, y, RADIUS)) {
            inside_circle_counter++;
        }
        pi = (double)(4*inside_circle_counter)/(i);
        printf("%10d | %f\n", i, pi);
    }
    putchar('\n');
    printf("PI: %.8f\n", pi);
    return 0;
}

bool is_inside_circle(double x, double y, double r) {
    return ((x*x) + (y*y)) <= (r*r);
}


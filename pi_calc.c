#include <stdio.h>
#include <stdbool.h>
#include "randlib.h"
#include <time.h>

#define RADIUS 1
#define ITERATIONS 100000

bool is_inside_circle(double x, double y, double radius);


int main() {
    randomize();
    double pi = 1;
    int inside_circle_counter = 1;

    double x, y;
    for(int i = 0; i < ITERATIONS; i++) {
        x = randReal(-1, 1);
        y = randReal(-1, 1);

        if(is_inside_circle(x, y, RADIUS)) {
            inside_circle_counter++;
        }
        pi = (double)(4*inside_circle_counter)/(i);
        printf(" %06d | %f \n", i, pi);
    }

    return 0;
}

bool is_inside_circle(double x, double y, double r) {
    return ((x*x) + (y*y)) <= (r*r);
}


#include <stdlib.h>
#include <time.h>

static int flag = 0;
#define RAN_RANDOMIZE {if(!flag){randomize();}}

void randomize() {
    flag = 1;
    srand((int)time(NULL));
}

double randNormalize() {
    RAN_RANDOMIZE
    return (rand()/((double) RAND_MAX + 1));
}

int randInt(int a, int b) {
    return (int)(randNormalize() * (b-a+1) + a);
}

double randReal(double a, double b){
    return (randNormalize() * (b-a) + a);
}
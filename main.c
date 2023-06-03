#include <stdio.h>
#include<stdlib.h>
#include<time.h>

float train[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

float rand_float(void) {
    return (float) rand() / (float) RAND_MAX;
}

int main() {

    // We do this so that our random number is different each time. We seed it with the current time.
    srand(time(0));

    float w = rand_float() * 10.0f;

    printf("%f \n", w);
    return 0;
}
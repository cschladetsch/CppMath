#include "pid.h"
#include <stdio.h>

int main() {

    PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

    double val = 20;
    for (int i = 0; i < 100; i++) {
        double inc = pid.calculate(0, val);
        printf("[%d]: val:% 7.3f inc:% 7.3f\n", i, val, inc);
        val += inc;
    }

    return 0;
}

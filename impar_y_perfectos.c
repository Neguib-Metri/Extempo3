#include <stdlib.h>
#include <stdio.h>

void main(int argc, char **argv)
{

    int minumin = atoi(argv[1]), maximun = atoi(argv[2]);
    int counter, j;

    for (counter = minumin; counter <= maximun; counter++) {

        if(counter % 2 != 0) {
            printf("%i impar\n", counter);
        }

        int sum = 0;
        for (j = 1; j < counter; j++) {
            if(counter % j == 0) {
                sum += j;
            }
        }

        if (sum == counter) {
            printf("%i perfecto\n", counter);
        }

    }
}

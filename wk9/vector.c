/* Exercise 8.02: Euclidean distance
 * Anthony Sulistio, February 2003
 * Antonette Mendoza and Alistair Moffat
 * (c) University of Melbourne */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* define a struct with two members: x and y */
typedef struct {
    // add code here
} vector_t;

/* function prototypes */
// add code here

int
main(int argc, char *argv[]) {
    
    // add declaration here

    printf("Enter two points: ");
    if (scanf("(%lf, %lf) (%lf, %lf)", &p1.x, &p1.y, &p2.x, &p2.y) != 4) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }

    // modify code here:
    // double result = distance();
    printf("distance between (%.1f, %.1f) and (%.1f, %.1f) is %.1f\n", p1.x,
           p1.y, p2.x, p2.y, result);

    return 0;
}

/* return the Euclidean distance between the given vectors */

// define code here
double
distance() {
}
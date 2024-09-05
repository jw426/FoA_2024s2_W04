#include <stdio.h>
#include <stdlib.h>
int cmp(const void* n1, const void* n2);
int desc_cmp(const void* n1, const void* n2);

int double_cmp(const void* n1, const void* n2) {
    if (*(double*)n1 > *(double*)n2) return 1;
    else if (*(double*)n1 < *(double*)n2) return -1;
    return 0;
}

int main(int argc, char** argv) {

    // int A[] = {5,5,1,2,3,4,15};
    // double B[] = {5.0,5.0,1.5,2.6,3.1,4.5,15.9};

    // qsort();

    for (int i = 0; i < 7; i++) {
        printf("%lf ", B[i]);
    }

    return 0;
}


// comparison function
// returns -ve if shouldn't be swapped
//          0 if n1 == n2
//      and +ve if should be swapped
int cmp(const void* n1, const void* n2) {
    // return ?;
}




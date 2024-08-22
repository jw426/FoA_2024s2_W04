#include <stdio.h>
#include "arrayops.h"

// Maximum size of numbers array
// #define

/* function prototypes */
int
index_of_smallest(int A[], int n);


int
main(int argc, char *argv[]) {

    int arr[1000];
    int n = read_int_array(arr, 1000);

    selection_sort(arr, n);

    
    return 0;
}

/* returns index of smallest value in the supplied array
 * another name for this function is argmax 
 * iterative version */
int
index_of_smallest(int A[], int n) {

    int smallest_index = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] < A[smallest_index]) {
            smallest_index = i;
        }
    }

    return smallest_index; 
}

/* implements selection sort by repeatedly swapping
   the next smallest item in the array into the first position of a
   decreasing array segment
   iterative version
*/
void
selection_sort(int A[], int n) {

    int smallest; 
    // Initialise left index with 0 
    // increment left index by 1
    for (int i = 0; i < n; i++) {
        // Get the smallest number’s index 
        smallest = index_of_smallest(A + __, n - __);
        // Switch with the left index
        int_swap(A + __, A + __ + ___);
    }

}
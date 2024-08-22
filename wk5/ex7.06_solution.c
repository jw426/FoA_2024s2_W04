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

// O(n)
int
index_of_smallest(int A[], int n) {

    int smallest_index = 0; // O(1) + O(n) + O(1) =~~~ O(n)


    for (int i = 1; i < n; i++) { // n times (n * O(1)) = O(n)
        if (A[i] < A[smallest_index]) {
            smallest_index = i; // O(1)
        }
    }

    return smallest_index; // O(1)
}

/* implements selection sort by repeatedly swapping
   the next smallest item in the array into the first position of a
   decreasing array segment
   iterative version
*/

// O(n^2)
void
selection_sort(int A[], int n) {

    int smallest; // O(1) + n * (O(n) + O(1)) = O(1) + O(n^2) + O(n) ~ O(n^2)

    // Initialise left index with 0 
    // increment left index by 1

    for (int i = 0; i < n; i++) { // n times 
        // Get the smallest number’s index
        smallest = index_of_smallest(A + i, n - i); // O(n)
        // Switch with the left index
        int_swap(A + i, A + i + smallest); // O(1)
    }

}


void
selection_sort_rec(int A[], int n) {

    // base case - STOP recursing 
    if (n <= 1) {
        return; 
    }

    int smallest = index_of_smallest(A, n);
    int_swap(A, A + smallest);    

    // recursive case - selection_sort_rec(...)
    selection_sort_rec(A + 1, n - 1);
}
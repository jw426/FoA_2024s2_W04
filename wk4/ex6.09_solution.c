#include <stdio.h>
#include <stdlib.h>

#define COIN1     200
#define COIN2     100
#define COIN3     50
#define COIN4     20
#define COIN5     10
#define COIN6     5

int main(int argc, char** argv) {

    int cents; 
    scanf("%d", &cents);
    print_change(cents);
    return 0;
}

/**
 * function that converts cents to required changes.
 * tests each different coin denomination in the correct ordering, 
 * and uses 'try_one_coin' to tell it how to generate the required change.
 */
void print_change(int cents) {
    try_one_coin(&cents, COIN1);
    try_one_coin(&cents, COIN2);
    try_one_coin(&cents, COIN3); 
}

/**
 * reduces the current cents amount 
 * by the value of the current coin as many times as is possible, 
 * altering the value of cents appropriately 
 * and returning the number of coins of that denomination that should be issued
 */
int try_one_coin(int *cents, int coin) {
    
    int times = *cents / coin;
    *cents -= times * coin; 
    print_result(times, coin);
    return times; 
    
}

/**
 * function that prints the result
 * calculated by 'try_one_coin' to the terminal
 */
void print_result(int num, int coin) {
    printf("give %d %3d-cent coins\n", num, coin);
}

    
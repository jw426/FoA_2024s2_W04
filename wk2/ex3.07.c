#include <stdio.h>
#include <stdlib.h>

// precedence of operators
// writing characters (printf)
// decimal point formatting 

int main(int argc, char** argv) {
    
    /* get input value */
    // reading terminal inputs (scanf)
    int temp; 
    char unit; 
    printf("Enter a temperature: ");
    if (scanf("%d%c", &temp, &unit) != 2) {
        exit(EXIT_FAILURE);
    }
    // %f = float, %lf - double, %c - char 
    
    /* checking the units of the character that was read */
    // if - else condition 
    
    char unit_converted; 
    double converted_temp;
    if (unit == 'F') {
        converted_temp = 5./9 * (temp - 32);
        unit_converted = 'C'; 
    } else {
        converted_temp = temp * 9./5 + 32;
        unit_converted = 'F';
    }
    
    /* print out the results */
    // writing characters (printf)
    // decimal point formatting 
    printf("The temperature %.1lf%c converts to %.1lf%c\n", (double)temp, unit, converted_temp, unit_converted);
    
    return 0;
}

































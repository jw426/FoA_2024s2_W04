#include <stdio.h>

int main(int argc, char** argv) {
    
    // Take in input / Read in characters (getchar())
    char ch; 
    int num_lines = 0, num_chars = 0, num_words = 0; 
    // in_a_word = 0 && ch != whitespace
    
    // flag variable 
    int in_a_word = 0; 
    
    while ((ch = getchar()) != EOF) {
        num_chars++;
        if (ch == '\n') {
            num_lines++;   
        }
        // counting a word
        if (!in_a_word && ch != ' ' && ch != '\n') {
            num_words++;   
            in_a_word = 1; 
        }
        if (ch == ' ' || ch == '\n') {
            in_a_word = 0;   
        }
    }


    // print out results (printf)
    printf("Lines: %6d\nWords: %6d\nChars: %6d\n", num_lines, num_words, num_chars);
    
    return 0;   
}
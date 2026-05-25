#include <stdio.h>

int main(){
    int i = 0;

    do {                    // the code inside the do block will be executed at least once, even if the condition is false
        printf("%d ", i);
        i++;
    } while (i < 5);

    printf("\n");
    
    
    // A variable with some specific numbers
    int numbers = 12345;
    
    // A variable to store the reversed number
    int revNumbers = 0;
    
    // Reverse and reorder the numbers
    while (numbers) {
        // Get the last number of 'numbers' and add it to 'revNumber'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }
    printf("Reversed number: %d\n", revNumbers);
    return 0;
}
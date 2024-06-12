//rev 3 digits
#include <stdio.h>

int main() {
    int num;
    
    // Read input value
    scanf("%d", &num);
    
    // Ensure the input is a 3-digit number
    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }
    
    // Extract digits
    int hundreds = num / 100;          // Extract the hundreds place digit
    int tens = (num / 10) % 10;        // Extract the tens place digit
    int units = num % 10;              // Extract the units place digit
    
    // Reverse the digits
    int reversed_num = units * 100 + tens * 10 + hundreds;
    
    // Print the reversed number
    printf("%d\n", reversed_num);
    
    return 0;
}

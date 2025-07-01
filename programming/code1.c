/*
Sum of two numbers using user defined function.
*/

#include <stdio.h> //library 

// Function to add two integers
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1,  result;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the addNumbers function and store the result
    result = addNumbers(num1, num2); // whaqtever is inside bracket is known as arguments

    // Display the sum
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
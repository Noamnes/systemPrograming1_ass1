#include <stdio.h>

// Returns 1 if 'num' is a prime number. Otherwise, returns 0.
// Assuming that 'num' is a positive integer.
int isPrime(int num){

    // Handling a special case.
    if (num == 1) return 0;

    int divider = 2;

    while (divider <= num / 2){

        if (num % divider == 0) return 0;

        divider++;
    }

    return 1;
}

// Assistant function. Used in 'isStrong'.
// Calculates and returns the factorial of 'value'.
// Assuming that 'value' is a non-negative integer.
int factorial(int value){

    int result = 1;

    while (value > 0){

        result *= value;

        value--;
    }

    return result;
}

// Returns 1 if 'num' is a "strong" number. Otherwise, returns 0.
// Assuming parameter is a positive integer.
int isStrong(int num){

    int sum = 0;

    // Temporary. Used to retrieve digits without affecting parameter.
    int temp = num;

    int digit;

    while (temp > 0){
        
        digit = temp % 10;

        sum += factorial(digit);

        temp /= 10;
    }

    if (num == sum) return 1;

    return 0;
}
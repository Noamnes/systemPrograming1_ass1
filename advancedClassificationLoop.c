#include <stdio.h>

// Assistant function.
// Simple math function. Performs power operation.
// Assuming parameters are both non-negative integers.
// Returns result.
int power(int base, int exp){

    int result = 1;

    while (exp > 0){

        result *= base;

        exp--;
    }

    return result;
}

// Assistant function. 
// Returns number of digits the parameter is comprised of.
// Assuming 'num' is a positive integer.
int digitAmount(int num){

    int amount = 0;
    
    while (num > 0){

        amount++;

        num /= 10;
    }

    return amount;
}

// Returns 1 if parameter is an "Armstrong" number. Otherwise, returns 0.
// Assuming parameter is a positive integer.
int isArmstrong(int num){

    int sum = 0;

    // Temporary. Used to retrieve digits.
    int temp = num;

    int digit;

    int n = digitAmount(num);

    while (temp > 0){

        digit = temp % 10;

        sum += power(digit, n); 

        temp /= 10;
    }

    if (sum == num) return 1;

    return 0;
}

// Returns 1 if 'num' is a palindrome number. Otherwise, returns 0.
// Assuming parameter is a positive integer.
int isPalindrome(int num){

    int digit;

    // Will store reversed number.
    int reverse = 0;

    // Temporary. Used to extract parameter's digits without affecting it.
    int temp = num;

    while (temp > 0){

        digit = temp % 10;

        reverse = reverse * 10 + digit;

        temp /= 10;
    }

    if (num == reverse) return 1;

    return 0;
}

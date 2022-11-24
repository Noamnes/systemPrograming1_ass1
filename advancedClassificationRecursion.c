int power(int base, int exp);

// Returns amount of digits 'num' consists of.
// Assuming parameter is a positive integer.
int digitAmount(int num){

    if (num == 0) return 0;

    return digitAmount(num/10) + 1;
}

// Returns the reversed version of 'num' parameter.
// Example:    reverse(143) = 341
int reverse(int num, int n){

    if (num == 0) return 0;

    return reverse(num/10, digitAmount(num/10)) +
     ((num%10)*power(10,n-1));
}

// Returns 1 if 'num' is a Palindrome. Otherwise, returns 0.
// Assuming that 'num' is a non-negative integer.
int isPalindrome(int num){

    int reversed = reverse(num, digitAmount(num));

    if (num == reversed) return 1;

    return 0;
}

// Returns 'base' to the power of 'exp'.
// Assuming 'exp' is a non-negative integer.
int power(int base, int exp){

    if (exp == 0) return 1;

    return power(base, exp-1) * base;
}

// Let 'a1', 'a2', ... , 'an' be 'num' parameter's digits.
// Let 'sum' equal a1^n + a2^n + ... + an^n.
// Return 'sum'.
int getSum(int num, int n){

    if (num == 0) return 0;

    return getSum(num/10, n) + power(num%10, n);
}

// Returns 1 if 'num' is Armstrong. Otherwise, returns 0.
int isArmstrong(int num){

    if (num == getSum(num, digitAmount(num))) return 1;

    return 0;
}
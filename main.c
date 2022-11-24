#include <stdio.h>
#include "NumClass.h"

// No validation for user input.
int main(){
    
    int firstNum, secondNum;

    scanf("%d %d", &firstNum, &secondNum);

    // Used to determine which input number is bigger.
    // Also, used to iterate over all values in-between.
    int min,max; 

    min = firstNum; // Assuming firstNum <= secondNum
    max = secondNum;

    // Used to iterate over values between 'min' and 'max'.
    int iterator = min;

    // 4 iterations for outer-loop,
    // to find all 'Armstrong', 'Strong', 'Prime' and 'Palindrome' values.
    for (int i = 0; i < 4; i++){

        while(iterator <= max){

            switch (i){

                case 0:

                    // Checking whether this is the first iteration of 'while' loop.
                    // Printing out accordingly.
                    if (iterator == min){
                        printf("The Armstrong numbers are: ");
                    }
                
                    if (isArmstrong(iterator) == 1){
                        printf("%d ", iterator);
                    }

                    break;

                case 3:

                    // Checking whether this is the first iteration of 'while' loop.
                    // Printing out accordingly.
                    if (iterator == min){
                        printf("\nThe Strong numbers are: ");
                    }

                    if (isStrong(iterator) == 1){
                        printf("%d ", iterator);
                    }

                    break;

                case 1:

                    // Checking whether this is the first iteration of 'while' loop.
                    // Printing out accordingly.
                    if (iterator == min){
                        printf("\nThe Palindrome numbers are: ");
                    }

                    if (isPalindrome(iterator) == 1){
                        printf("%d ", iterator);
                    }

                    break;

                case 2:

                    // Checking whether this is the first iteration of 'while' loop.
                    // Printing out accordingly.
                    if (iterator == min){
                        printf("\nThe Prime numbers are: ");
                    }

                    if (isPrime(iterator) == 1){
                        printf("%d ", iterator);
                    }

                    break;
            }
        
            iterator++;
        }
    
        iterator = min;
    }

    printf("\n");
    
    return 0;
}
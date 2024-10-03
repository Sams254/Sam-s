#include <stdio.h>

int main() {
    int age;
    float income;

    // Get the user's age and income
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income (in Ksh): ");
    scanf("%f", &income);

    // Check the conditions for loan qualification
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}

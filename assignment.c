#include <stdio.h>

int main()
{ int bill__amount, amount_given, quotient, remainder;
    printf("Enter  amount_given: ");
    scanf("%d", & amount_given);
    printf("Enter bill__amount: ");
    scanf("%d", &bill__amount);

    // Computes quotient
    quotient =  amount_given/ bill__amount;

    // Computes remainder
    remainder =  amount_given% bill__amount;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}

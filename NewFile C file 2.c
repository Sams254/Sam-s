#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate = 0, fineAmount = 0;

    // Get the input values from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue > 14) {
        fineRate = 100;
    }

    // Calculate the total fine amount
    fineAmount = fineRate * daysOverdue;

    // Display the results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate (Ksh/day): %.2f\n", fineRate);
    printf("Total Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}

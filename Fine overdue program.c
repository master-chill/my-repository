#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getDays_overdue(int due_day, int due_month, int due_year, int return_day, int return_month, int return_year);
int calculateFine(int days_overdue);

int main() {
    float book_ID;
    int due_day, due_month, due_year;
    int return_day, return_month, return_year;
    int days_overdue, fine;

    // Input for book ID and dates
    printf("Enter the book ID: ");
    scanf("%f", &book_ID);

    printf("Enter the due date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &due_day, &due_month, &due_year);

    printf("Enter the return date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &return_day, &return_month, &return_year);

    // Calculate days overdue
    days_overdue = getDays_overdue(due_day, due_month, due_year, return_day, return_month, return_year);

    // Calculate fine based on days overdue
    fine = calculateFine(days_overdue);

    return 0;
}

// Function to calculate days overdue
int getDays_overdue(int due_day, int due_month, int due_year, int return_day, int return_month, int return_year) {
    struct tm due_date = {0}, return_date = {0};
    time_t due_time, return_time;
    double difference_in_seconds;
    int days_overdue;

    // Setting up the due date
    due_date.tm_mday = due_day;
    due_date.tm_mon = due_month - 1; // Months are 0-11 in struct tm
    due_date.tm_year = due_year - 1900; // Years are counted since 1900

    // Setting up the return date
    return_date.tm_mday = return_day;
    return_date.tm_mon = return_month - 1;
    return_date.tm_year = return_year - 1900;

    // Convert both dates to time_t
    due_time = mktime(&due_date);
    return_time = mktime(&return_date);

    // Calculate the difference in seconds, then convert to days
    difference_in_seconds = difftime(return_time, due_time);
    days_overdue = difference_in_seconds / (60 * 60 * 24); // Convert seconds to days

    printf("You are %d days overdue.\n", days_overdue);

    return days_overdue;
}

// Function to calculate fine based on days overdue
int calculateFine(int days_overdue) {
    int fine = 0;

    if (days_overdue <= 0) {
        printf("Your overdue fine is Ksh 0.\n");
    }
    else if (days_overdue > 1 && days_overdue <= 7) {
        fine = days_overdue * 20;
        printf("Your overdue fine is Ksh %d.\n", fine);
    }
    else if (days_overdue >= 8 && days_overdue <= 14) {
        fine = days_overdue * 50;
        printf("Your overdue fine is Ksh %d.\n", fine);
    }
    else if (days_overdue >= 15) {
        fine = days_overdue * 100;
        printf("Your overdue fine is Ksh %d.\n", fine);
    }

    return fine;
}

#include <stdio.h>

int main() {
    int book_ID, due_date, return_date, Days_overdue;
    
    printf("Enter the book ID: ");
    scanf("%d", &book_ID);
    
    printf("Enter the due date: ");
    scanf("%d", &due_date);
    
    printf("Enter the return date: ");
    scanf("%d", &return_date);
    
    Days_overdue = return_date - due_date;
    
    if (Days_overdue > 1 && Days_overdue <=7) {
        printf("Your overdue fine is Ksh 20 \n");
    }
    else if (Days_overdue >=8 && Days_overdue <=14) {
        printf("Your overdue fine is Ksh 50 \n");
    }
    else if (Days_overdue >=15) {
        printf("Your overdue fine is Ksh 100 \n");
    }

    return 0;
}
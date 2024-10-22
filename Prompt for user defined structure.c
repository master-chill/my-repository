#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book {
    char title[100], author[50], ISBN[20];
    int pub_year;
    float price;
} book1;

int main() {
    
    printf("Enter the book title: ");
    scanf("%100s", book1.title);
    printf("Enter the book author: ");
    scanf("%50s", book1.author);
    printf("Enter the book ISBN: ");
    scanf("%20s", book1.ISBN);   
    printf("Enter the book's publication year: ");
    scanf("%d", &book1.pub_year);
    printf("Enter the book's price: ");
    scanf("%f", &book1.price);
    
    printf("\nBook Details:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Publication Year: %d\n", book1.pub_year);
    printf("Price: $%.2f\n", book1.price);
    
    return 0;
}
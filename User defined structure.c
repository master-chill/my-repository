#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[30], author[30], ISBN[13];
    int pub_year;
    float price;
} book1;

int main() {
    strcpy(book1.title, "Introduction to C programming");
    strcpy(book1.author, "John Smith");
    strcpy(book1.ISBN, "9780131103627");
    book1.pub_year = 2022;
    book1.price = 49.99;
    
    printf("Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Publication year: %d \n", book1.pub_year);
    printf("Price: $%.2f \n", book1.price);
    
    return 0;
}
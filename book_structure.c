#include <stdio.h>
#include <string.h>

// Defining a structure for a book
struct book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct book b1, b2; // Creating variables for the structure

    // Assigning values to the structure members [object/or Variable <attribute_name>]
    strcpy(b1.title, "Engineering Mathematics");
    strcpy(b1.author, "Raymond Murthy");
    b1.pages = 180;
    b1.price = 9.99;

    strcpy(b2.title, "Engineering Physics");
    strcpy(b2.author, "Raymond Murthy");
    b2.pages = 281;
    b2.price = 7.99;

    // Printing the details of the books
    printf("%s by %s, %d pages, $%.2f\n", b1.title, b1.author, b1.pages, b1.price);
    printf("%s by %s, %d pages, $%.2f\n", b2.title, b2.author, b2.pages, b2.price);

    return 0;
}

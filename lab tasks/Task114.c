#include <stdio.h>
struct Books{
    char tilte[50];
    char author[50];
    float price;
};
int main() {
    struct Books book[3];
    int max=0, min=0;
    for(int i=0; i<3; i++){
        printf("Enter the book details: %d\n", i+1);
        printf("Enter the tilte: ");
        scanf("%s", &book[i].tilte);
        printf("Enter the author: ");
        scanf("%s", &book[i].author);
        printf("Enter the price: ");
        scanf("%f", &book[i].price);
    }
    for(int i=0; i<3; i++){
        if(book[i].price>book[max].price){
            max=i;
        }
        else if(book[i].price<book[min].price){
            min=i;
        }
    }
    printf("Book with the higest price:");
    printf("Title: %s\n", book[max].tilte);
    printf("Author: %s\n", book[max].author);
    printf("Price: %f\n", book[max].price);
    printf("Book with the lowest price:\n");
    printf("Title: %s\n", book[min].tilte);
    printf("Author: %s\n", book[min].author);
    printf("Price: %f\n", book[min].price);
}
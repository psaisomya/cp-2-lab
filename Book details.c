/*Create structure to store details of book. Store and print the details of 5 books
using pointer.*/
#include<stdio.h>
struct Book
{
char title[50];
char author[50];
float price;
};
int main()
{
struct Book books[5];
struct Book *ptr;    
int i;
for(i = 0; i < 5; i++)
{
ptr = &books[i];
printf("Enter details for Book %d:\n", i + 1);
printf("Title: ");
scanf("%s", ptr->title);
printf("Author: ");
scanf("%s", ptr->author);
printf("Price: ");
scanf("%f", &ptr->price);
printf("\n");
}
printf("--- Book Details ---\n");
for(i = 0; i < 5; i++) {
ptr = &books[i];
printf("Book %d: %s by %s, Price: $%.2f\n", i + 1, ptr->title, ptr->author, ptr->price);
}
return 0;
}

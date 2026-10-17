#include <stdio.h>

typedef struct{
    int ID;
    char Title[100];
    char Writer[100];
}Book;

int main(void){
    int ID;
    char Title[100];
    char Writer[100];
    Book books[3];

    for(int i = 0; i < 3; i++){
        printf("ID for new book: ");
        scanf("%d", &books[i].ID);
        printf("Title: ");
        scanf("%s", books[i].Title);
        printf("Writer: ");
        scanf("%s", books[i].Writer);
    }

    for (int i = 0; i < 3; i++){
        printf("Books[%d] => {ID: %d, title: %s, writer: %s}\n", i, books[i].ID, books[i].Title, books[i].Writer);
    }
}
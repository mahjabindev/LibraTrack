#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

struct Book books[100];
int n = 20;

// Function prototypes
void displayBooks();
void searchBook();
void issueBook();
void returnBook();


int main() {
    int choice;



     // 20 Sample Books
    books[0] = (struct Book){101, "C Programming", "Dennis Ritchie", 1};
    books[1] = (struct Book){102, "Data Structures", "Mark Allen", 1};
    books[2] = (struct Book){103, "Algorithms", "CLRS", 1};
    books[3] = (struct Book){104, "Operating System", "Galvin", 1};
    books[4] = (struct Book){105, "Database System", "Korth", 1};
    books[5] = (struct Book){106, "Computer Networks", "Tanenbaum", 1};
    books[6] = (struct Book){107, "Java Programming", "Herbert Schildt", 1};
    books[7] = (struct Book){108, "Python Basics", "Guido", 1};
    books[8] = (struct Book){109, "Software Engineering", "Pressman", 1};
    books[9] = (struct Book){110, "Artificial Intelligence", "Russell", 1};
    books[10] = (struct Book){111, "Machine Learning", "Tom Mitchell", 1};
    books[11] = (struct Book){112, "Deep Learning", "Ian Goodfellow", 1};
    books[12] = (struct Book){113, "Compiler Design", "Aho", 1};
    books[13] = (struct Book){114, "Digital Logic", "Morris Mano", 1};
    books[14] = (struct Book){115, "Microprocessor", "Ramesh Gaonkar", 1};
    books[15] = (struct Book){116, "Cloud Computing", "Buyya", 1};
    books[16] = (struct Book){117, "Cyber Security", "Stallings", 1};
    books[17] = (struct Book){118, "Web Development", "MDN", 1};
    books[18] = (struct Book){119, "Mobile App Dev", "Android Dev", 1};
    books[19] = (struct Book){120, "Data Science", "Joel Grus", 1};


    while (1) {
        printf("\n*** LIBRA TRACK SYSTEM ***\n");
        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1: displayBooks(); break;
            case 2: searchBook(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");


        }
    }
return 0;
}

// 🔷 Display সব বই
void displayBooks() {
    printf("\nID\tTitle\t\tAuthor\t\tAvailable\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%d\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].available);
    }
}


// 🔷 Search book by ID
void searchBook() {
    int id, found = 0;
    printf("Enter book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            printf("Found: %s by %s\n", books[i].title, books[i].author);
            found = 1;
        }
    }

    if (!found) {
        printf("Book not found\n");
    }
}


// 🔷 Issue book
void issueBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            if (books[i].available == 1) {
                books[i].available = 0;
                printf("Book issued successfully\n");
            } else {
                printf("Already issued\n");
            }
            return;
        }
    }

    printf("Book not found\n");
}


// 🔷 Return book
void returnBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            books[i].available = 1;
            printf("Book returned successfully\n");
            return;
        }
    }

    printf("Book not found\n");
}


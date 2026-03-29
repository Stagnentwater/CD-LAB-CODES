#include <stdio.h>
#include <string.h>

struct symbol {
    char name[20];
    int addr;
} s[50];

int n = 0; // current number of symbols

// Insert
void insert() {
    printf("Enter symbol name: ");
    scanf("%s", s[n].name);
    s[n].addr = n;
    n++;
    printf("Symbol inserted successfully!\n");
}

// Delete
void delete() {
    char name[20];
    int i, j, found = 0;

    printf("Enter symbol name to delete: ");
    scanf("%s", name);

    for(i = 0; i < n; i++) {
        if(strcmp(s[i].name, name) == 0) {
            found = 1;
            for(j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            printf("Symbol deleted successfully!\n");
            break;
        }
    }

    if(!found)
        printf("Symbol not found!\n");
}

// Modify
void modify() {
    char name[20];
    int i, found = 0;

    printf("Enter symbol name to modify: ");
    scanf("%s", name);

    for(i = 0; i < n; i++) {
        if(strcmp(s[i].name, name) == 0) {
            printf("Enter new name: ");
            scanf("%s", s[i].name);
            printf("Symbol modified successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Symbol not found!\n");
}

// Display
void display() {
    int i;
    printf("\nSymbol Table:\n");
    printf("Name\tAddress\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%d\n", s[i].name, s[i].addr);
    }
}

int main() {
    int choice;

    while(1) {
        printf("\n--- SYMBOL TABLE MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Modify\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: modify(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
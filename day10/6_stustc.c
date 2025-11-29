#include <stdio.h>
#include <string.h>

#define MAX 100

// Student structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Stack structure
struct Student stack[MAX];
int top = -1;

// Push function
void push() {
    if (top == MAX - 1) {
        printf("\nStack is FULL! Cannot add more students.\n");
        return;
    }

    struct Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    stack[++top] = s;
    printf("\nStudent added successfully!\n");
}

// Pop function
void pop() {
    if (top == -1) {
        printf("\nStack is EMPTY! No students to remove.\n");
        return;
    }

    printf("\nRemoved Student:\n");
    printf("Roll: %d\n", stack[top].roll);
    printf("Name: %s\n", stack[top].name);
    printf("Marks: %.2f\n", stack[top].marks);

    top--;
}

// Display function
void display() {
    if (top == -1) {
        printf("\nNo students to display. Stack is EMPTY.\n");
        return;
    }

    printf("\n--- Student List (Top to Bottom) ---\n");
    for (int i = top; i >= 0; i--) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll: %d\n", stack[i].roll);
        printf("Name: %s\n", stack[i].name);
        printf("Marks: %.2f\n", stack[i].marks);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n\n=== Student Management System (Using Stack) ===\n");
        printf("1. Add Student (Push)\n");
        printf("2. Remove Student (Pop)\n");
        printf("3. Display Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}

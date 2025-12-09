#include <stdio.h>

// Define a structure for student
struct student {
    int id;
    char name[20];
    float marks;
};

int main() {
    // Initialize structure variable
    struct student s1 = {101, "Priya", 89.5};

    // Print student details
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
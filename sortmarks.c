#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};


void readStudents(struct Student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}


void sortStudents(struct Student s[], int n) {
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}


void displayStudents(struct Student s[], int n) {
    int i;
    printf("\nStudent Details (Sorted by Marks):\n");
    printf("Roll No\tName\t\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n",
               s[i].rollNo, s[i].name, s[i].marks);
    }
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    readStudents(students, n);
    sortStudents(students, n);
    displayStudents(students, n);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    int roll;
    int class;
};

struct Student studentRegister[MAX_STUDENTS];
int numStudents = 0;

void registerStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);

    printf("Enter student name: ");
    scanf(" %[^\n]s", newStudent.name);

    printf("Enter student roll: ");
    scanf("%d", &newStudent.roll);

    printf("Enter student class: ");
    scanf("%d", &newStudent.class);

    studentRegister[numStudents++] = newStudent;
    printf("Student registered successfully.\n");
}

void modifyStudent() {
    int id;
    printf("Enter student ID to modify: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (studentRegister[i].id == id) {
            printf("Enter new name: ");
            scanf(" %[^\n]s", studentRegister[i].name);

            printf("Enter new roll: ");
            scanf("%d", &studentRegister[i].roll);

            printf("Enter new class: ");
            scanf("%d", &studentRegister[i].class);

            printf("Student details modified successfully.\n");
            return;
        }
    }

    printf("Student with ID %d not found.\n", id);
}

void removeStudent() {
    int id;
    printf("Enter student ID to remove: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (studentRegister[i].id == id) {
            // Shift all students after the removed student by one position
            for (int j = i; j < numStudents - 1; j++) {
                studentRegister[j] = studentRegister[j + 1];
            }
            numStudents--;
            printf("Student removed successfully.\n");
            return;
        }
    }

    printf("Student with ID %d not found.\n", id);
}

void listStudents() {
    if (numStudents == 0) {
        printf("No students registered.\n");
        return;
    }

    printf("Registered students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d, Name: %s, Roll: %d, Class: %d\n",
               studentRegister[i].id,
               studentRegister[i].name,
               studentRegister[i].roll,
               studentRegister[i].class);
    }
}

void searchStudent() {
    char searchName[50];
    int searchRoll, searchClass;
    int found = 0;

    printf("Enter student name to search: ");
    scanf(" %[^\n]s", searchName);

    printf("Enter student roll to search: ");
    scanf("%d", &searchRoll);

    printf("Enter student class to search: ");
    scanf("%d", &searchClass);

    printf("Search results:\n");
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(studentRegister[i].name, searchName) == 0 &&
            studentRegister[i].roll == searchRoll &&
            studentRegister[i].


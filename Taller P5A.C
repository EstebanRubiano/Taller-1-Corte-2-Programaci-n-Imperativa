// Taller corte 2 Punto 5 - Actividad 1

#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter the grade of student %d: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    printf("\nStudents with a grade higher than 80:\n");
    for (i = 0; i < 3; i++) {
        if (students[i].grade > 80) {
            printf("%s, Age: %d, grade: %.2f\n", students[i].name, students[i].age, students[i].grade);
        }
    }

    return 0;
}
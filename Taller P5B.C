// Taller corte 2 Punto 5 - Actividad 2

#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date date;
};

const char* getMonthName(int month) {
    const char* months[] = {"", "January", "February", "March", "April", "May", "June", 
                            "July", "August", "September", "October", "November", "December"};
    if (month >= 1 && month <= 12) {
        return months[month];
    }
    return "";
}

int main() {
    struct Event events[3];
    int searchMonth;

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of event %d: ", i + 1);
        fgets(events[i].name, 50, stdin);
        events[i].name[strcspn(events[i].name, "\n")] = '\0'; 

        printf("Enter the date of event %d Date in format dd/mm/yyyy: ", i + 1);
        char dateInput[11];
        fgets(dateInput, 11, stdin);
        sscanf(dateInput, "%d/%d/%d", &events[i].date.day, &events[i].date.month, &events[i].date.year);

        getchar();  
    }

    printf("Enter the month to search (mm): ");
    scanf("%d", &searchMonth);

    printf("Events in %s:\n", getMonthName(searchMonth));
    for (int i = 0; i < 3; i++) {
        if (events[i].date.month == searchMonth) {
            printf("%s: %02d/%02d/%04d\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year);
        }
    }

    return 0;
}
#include <stdio.h>
#include "complexity.h"

struct Student
{
    int ID;
    char name[20];
    char pno[10];
};

int main()
{
    START_COMPLEXITY();
    struct Student s;
    // int ID,char name[20],char phoneno[10];
    printf("Enter your ID:");
    scanf("%d", &s.ID);
    printf("\nEnter your name:");
    scanf("%s", &s.name);
    printf("\nEnter your phone no.(10 digit):");
    scanf("%s", &s.pno);

    FILE *file = fopen("Student Record.csv", "a");
    if (file)
    {
        fprintf(file, "%s,%s,%d,%s,%s", __TIMESTAMP__, __FILE__, s.ID, s.name, s.pno);
    }
    END_COMPLEXITY();
    return 0;
}
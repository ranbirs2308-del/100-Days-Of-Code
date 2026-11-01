// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main()
{
    FILE *fp;
    char name[100];
    int roll, n, i;
    float marks;
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%99s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%99s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }
    fclose(fp);
    return 0;
}
#include <stdio.h>

struct Student
{
    int roll_number;
    char name[100];
    char branch[100];
    char section[100];
    float percentage;
};

int main()
{
    struct Student students[100];
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    // input students
    for (int i = 0; i < n; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);

        printf("Enter name: ");
        scanf("%s", &students[i].name);

        printf("Enter branch: ");
        scanf("%s", &students[i].branch);

        printf("Enter section: ");
        scanf("%s", &students[i].section);

        printf("Enter percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // display students info
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Branch: %s\n", students[i].branch);
        printf("Section: %s\n", students[i].section);
        printf("Percentage: %f\n", students[i].percentage);
    }

    return 0;
}
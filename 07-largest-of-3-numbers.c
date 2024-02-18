#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Enter a number: ");
    scanf("%d", &c);

    (a > b && a > c) ?
        printf("%d", a)
    : 
        (b > a && b > c) ?
            printf("%d", b)
        :
            printf("%d", c);

    return 0;
}
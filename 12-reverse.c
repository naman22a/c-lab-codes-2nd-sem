#include <stdio.h>

int main()
{
    int n, r = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        r = r * 10 + digit;
        n = n / 10;
    }

    printf("Reverse: %d", r);

    return 0;
}
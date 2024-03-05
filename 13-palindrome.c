#include <stdio.h>

int main()
{
    int n, r = 0;
    scanf("%d", &n);

    int temp = n;

    while (n != 0)
    {
        int digit = n % 10;
        r = r * 10 + digit;
        n = n / 10;
    }

    if (r == temp)
        printf("Yup\n");
    else
        printf("Nope\n");

    return 0;
}
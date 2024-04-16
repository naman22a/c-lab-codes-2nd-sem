#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    char s[100];
    gets(s);

    if (isPalindrome(s))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
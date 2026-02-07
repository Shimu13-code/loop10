#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many multiples of 3? ");

    for (int i = 1; i <= n; i++)
    {
        int multiple = i * 3;
        printf("%d\n", multiple);
    }
}

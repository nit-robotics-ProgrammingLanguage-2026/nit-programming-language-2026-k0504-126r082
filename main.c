
#include <stdio.h>

int main(void)
{
    int number;
    int first_range;
    int second_range;

    scanf("%d", &number);

    // 0から9までの整数を判定する
    first_range = (number >= 0 && number <= 9);

    // 12から14までの整数を判定する
    second_range = (number >= 12 && number <= 14);

    if (first_range || second_range)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}

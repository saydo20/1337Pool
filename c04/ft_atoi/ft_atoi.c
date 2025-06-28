#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int mn = 0;
    int result = 0;

    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' ||
           str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            mn++;
        i++;
    }

    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    if (mn % 2 == 1)
        result = -result;

    return result;
}

int main(void)
{
    char s[] = "    ---+--+1234ab567";
    printf("%d\n", ft_atoi(s));
    return 0;
}

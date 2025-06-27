#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{

    int i = 0;
    while (str[i])
    {
        if (str[i] != '\n' && str[i] != '\f' && str[i] != '\t' && str[i] != ' ' && str[i] != '\v' && str[i] != '\r')
            break;
        i++;
    }
    int mn = 0;
    while (str[i])
    {
        if (str[i] != '-' && str[i] != '+')
            break;
        if (str[i] = '-')
            mn++;
        i++;
    }

    int s1 = 0;
    int j = 0;
    while (str[i] && str[i] >= 49 && str[i] <= 57)
    {
        s1 = s1 * 10 + (str[i] - '0');
        i++;
    }
    if(mn % 2 == 1)
        s1 = -s1;
    return s1;
}
int main(void)
{
    char s[] = "    ---+--+1234ab567";
    printf("%d", ft_atoi(s));
}
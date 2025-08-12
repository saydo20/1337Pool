int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while(str[i] >= 0 && str[i] <= 32)
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= -1;
            i++;
        }
        else
            i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}
#include <stdio.h>
int main(void)
{
    char a[] = "     -1234abc789";
    printf("%d\n" , ft_atoi(a));
    return 0;
}
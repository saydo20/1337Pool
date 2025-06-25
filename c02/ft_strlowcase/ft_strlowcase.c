char *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}
#include <stdio.h>
int main(void)
{
    char name[] = "SAad";
    printf("%s", ft_strupcase(name));
}
char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;
    while (str[i] != '\0')
    {
        if (new_word == 1 && str[i] >= 'a' && str[i]  <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9')
        {
            new_word = 0;
        }
        else if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9'))
        {
            new_word = 1;
        }
        i++;
    }
    return str;
}
#include <stdio.h>
int main(void)
{
    char name[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(name));
}
char *ft_strstr(char *str, char *to_find)
{
    if (to_find[0] == '\0')
        return str;

    unsigned int i = 0;

    while (str[i] != '\0')
    {
        unsigned int j = 0;
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
        i++;
    }
    return 0;
}

#include <stdio.h>

int main(void)
{
    char s1[] = "saad jdiayuuh";
    char s2[] = "jdia";
    char *res = ft_strstr(s1, s2);
    printf("%s\n", res);
}

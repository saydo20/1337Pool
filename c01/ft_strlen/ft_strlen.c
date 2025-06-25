#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(void)
{
    int len = ft_strlen("saad");
    printf("%d", len);
}
// i used printf just for show the value that the function ft_strlen return//
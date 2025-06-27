unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb)
{
    unsigned int dest_len = ft_strlen(dest);
    unsigned int src_len = ft_strlen(src);
    unsigned int i = 0;

    // لا توجد مساحة حتى لاحتواء dest
    if (nb <= dest_len)
        return nb + src_len;

    // انسخ src في نهاية dest دون تجاوز nb - 1
    while (src[i] && (dest_len + i) < (nb - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // أضف null-terminator
    dest[dest_len + i] = '\0';

    // القيمة المرجعة هي الطول الكلي الذي كنت سأصنعه
    return dest_len + src_len;
}

#include <stdio.h>

int main(void)
{
    char dest[20] = "hello";
    char src[] = " world";
    unsigned int result = ft_strlcat(dest, src, 10);

    printf("Result: %u\n", result); // مفروض تطبع الطول الذي *كان سيتم تكوينه*
    printf("Dest: %s\n", dest);     // سترى محتوى dest بعد النسخ

    return 0;
}

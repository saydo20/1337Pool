char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'
			|| str[i] >= '0' && str[i] <= '9')
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char name[] = "salut comment tu vas ? 42mots";

	printf("%s", ft_strcapitalize(name));
}

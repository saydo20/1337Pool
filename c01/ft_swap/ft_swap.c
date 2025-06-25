void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a = 12;
    int b = 13;
    ft_swap(&a, &b);
}
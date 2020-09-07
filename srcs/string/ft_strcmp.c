int     ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (*(s1 + i) == *(s2 + i))
    {
        if (*(s1 + i) == 0 || *(s2 + i) == 0)
            break;
        i++;
    }
    return (*(s1 + i) - *(s2 + i));
}

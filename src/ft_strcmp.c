int ft_strcmp(char *dest, char *src)
{
    while (*dest == *src)
    {
        if (*dest == 0)
            break;
        dest++;
        src++;
    }
    return (*dest - *src);
}

char *_strstr(char *haystack, char *needle)
{
    char *a, *b;
    
    for (b = haystack; *b != '\0'; b++)
    {
        for (a = needle; *a != '\0'; a++)
        {
            if (*b != *a)
            {
                b -= (a - needle) - 1;
                break;
            }
            else if (*(a + 1) == '\0')
            {
                return b - (a - needle);
            }
            b++;
        }
    }
    return 0;
}


int my_get_char_repeat(char to_find, const char *to_search){
    int i = 0;
    int a = 0;
    while (to_search[i] != '\0')
    {
        if (to_search[i] == to_find)
        {
            a++;
        }
        i++;
    }
    return a;
}
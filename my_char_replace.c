void print_char(char c);

int my_strlen (char *c);

char *my_char_replace (char *origin, char toFind,char toReplace){
    int i = 0;
    while (origin[i] != '\0'){
        if (origin[i] == toFind){
            origin[i] = toReplace;
        }
        i++;
    }
    return origin;

}
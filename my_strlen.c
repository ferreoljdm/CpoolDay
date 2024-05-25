int my_strlen (char *c){
    int a = 0;
    char b;
    while (b != '\0'){
        b = c[a];
        a++;
    }
    a--;
    return a;
}
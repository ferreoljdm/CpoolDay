void print_char(char c);

void my_print_n_ascii(int howMany){
    int i;
    if (howMany + 32 >126){
        return;
    }
    for (i = 32 ; i <= howMany + 32 ; i++){
        print_char(i);
    }
}
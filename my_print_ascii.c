void print_char (char c);

void my_print_ascii(void){
    int i;
    for (i = 32 ; i <= 126 ; i++){
        print_char(i);
    }
}
# include <stdio.h>
int char_to_ascii(char g){
    int num = g;
    if('a' <= num && num <= 'z' ){
        return num - 32;
    }
    if('A' <= num && num <= 'A' ){
        return num + 32;
    }
    return 0;
}
int main(){ 
    int charNum = char_to_ascii('A');
    printf("%c", charNum);
    return 0;
}
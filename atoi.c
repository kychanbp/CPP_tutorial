#include <stdio.h>
#include <string.h>

/* atoi: convert s to integer */
int atoi(char s[]){
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int lower(char s[]){
    int c;
    c = s[0];

    if (c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    }
    else{
        return c;
    }
}


int main(){
    int n;
    char digit[] = "1234";
    n = atoi(digit);
    printf("%d\n", n);

    int m;
    char upper[] = "A";
    m = lower(upper);
    char c = m;
    printf("%c\n", c);
}
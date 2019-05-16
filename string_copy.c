#include <stdio.h>

int string_copy(char *a, char *b) {
    int i, j = 0;
    while(a[j] != '\0')j++;
    j++;
    for(i = 0;i < j;i++){
        printf("%d\n",i);
        b[i] = a[i];
    }
    return i;
}

int main() {
    char a[7] = "hello\n";
    char b[7];
    int length = string_copy(a, b);
    printf("%s",b);
    printf("%d %s", length, b);
}

#include <stdio.h>
#include <stdlib.h>

int i = 0;
int count(){
    return ++i;
}

int main() {
printf("%d\n", count());
printf("%d\n", count());
printf("%d\n", count());
}

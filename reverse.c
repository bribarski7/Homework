#include <stdio.h>
#include <stdlib.h>
int print_array(int* p,int n){
    for(int i = 0;i < n;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
}
int reverse(int* p,int n){
    for(int i = 0;i < n/2;i++){
        int t = p[n-i-1];
        p[n-i-1] = p[i];
        p[i] = t;
    }
}
int main() {
    int a[5] = {5, 17, 1, -4, 3};
    print_array(a, 5);
    reverse(a, 5);
    print_array(a, 5);
}
